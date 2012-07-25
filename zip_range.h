///////////////////////////////////////////////////////////////////////
///
/// *  Create a zip range for use with boost::range
/// *
/// *  Created by Ian Baxter, no attribution required.
/// *
/// *  This code is provided under the CREATIVE COMMONS ATTRIBUTION LICENSE.
/// *  http://creativecommons.org/.
/// 
///////////////////////////////////////////////////////////////////////

#pragma once

#include <boost/iterator/zip_iterator.hpp>
#include <boost/range/iterator_range.hpp>

///////////////////////////////////////////////////////////////////////
/// Zip 2 containers into a single range
template< typename C1, typename C2 >
auto zip_range( C1& c1, C2& c2 ) -> decltype(
	boost::make_iterator_range(
		boost::make_zip_iterator(
			boost::make_tuple( std::begin( c1 ), std::begin( c2 ) )
		), 
		boost::make_zip_iterator(
			boost::make_tuple( std::end( c1 ), std::end( c2 ) )
		)
	)
)
{
	return boost::make_iterator_range(
		boost::make_zip_iterator(
			boost::make_tuple( std::begin( c1 ), std::begin( c2 ) )
		), 
		boost::make_zip_iterator(
			boost::make_tuple( std::end( c1 ), std::end( c2 ) )
		)
	);
}

///////////////////////////////////////////////////////////////////////
/// Zip 3 containers into a single range
template< typename C1, typename C2, typename C3 >
auto zip_range( C1& c1, C2& c2, C3& c3 ) -> decltype(
	boost::make_iterator_range(
		boost::make_zip_iterator(
			boost::make_tuple( std::begin( c1 ), std::begin( c2 ), std::begin( c3 ) )
		), 
		boost::make_zip_iterator(
			boost::make_tuple( std::end( c1 ), std::end( c2 ), std::end( c3 ) )
		)
	)
)
{
	return boost::make_iterator_range(
		boost::make_zip_iterator(
			boost::make_tuple( std::begin( c1 ), std::begin( c2 ), std::begin( c3 ) )
		), 
		boost::make_zip_iterator(
			boost::make_tuple( std::end( c1 ), std::end( c2 ), std::end( c3 ) )
		)
	);
}

