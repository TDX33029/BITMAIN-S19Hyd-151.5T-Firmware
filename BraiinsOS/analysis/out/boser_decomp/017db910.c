// FUN_017db910 @ 017db910 size=56 calls_out=2 calls_in=2
// strings: <Uri as Dst>::host should have a str

void FUN_017db910(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (iVar1 = FUN_0140d000(*(undefined4 *)(param_1 + 0xc)), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("<Uri as Dst>::host should have a str",0x24,&DAT_01d1cafc);
  }
  return;
}

