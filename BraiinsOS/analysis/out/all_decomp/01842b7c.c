// FUN_01842b7c @ 01842b7c size=20 calls_out=1 calls_in=2
// strings: /checkout/src/llvm-project/libunwind/src/Unwind-EHABI.cpp | (*unwindingData & 0xf0000000) == 0x80000000 && 'Must be a compact entry' | unwindOneFrame

void FUN_01842b7c(void)

{
  undefined4 in_r3;
  
                    /* WARNING: Subroutine does not return */
  FUN_016d2c94("(*unwindingData & 0xf0000000) == 0x80000000 && \"Must be a compact entry\"",
               "/checkout/src/llvm-project/libunwind/src/Unwind-EHABI.cpp",0xae,"unwindOneFrame",
               in_r3);
}

