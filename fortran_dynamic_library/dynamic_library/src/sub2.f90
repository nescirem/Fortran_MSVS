subroutine sub2()
    
    !DEC$ ATTRIBUTES DLLEXPORT :: sub2
    implicit none
    
    include 'just_inculde_me.inc'
    
    write( *,* ) '4. This is a subroutine with include file in the dynamic library!'
    write( *,* ) '5. Content in the include file is: "'//hello//'"'
    
end subroutine sub2
