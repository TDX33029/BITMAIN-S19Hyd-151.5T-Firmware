// FUN_01996570 @ 01996570 size=104 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01996570(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  
  iVar1 = *param_1;
  iVar2 = 4;
  if (4 < (uint)(iVar1 * 2)) {
    iVar2 = iVar1 << 1;
  }
  FUN_0197ad30(&local_24,iVar1,param_1[1],iVar2,8,0x28);
  if (local_24 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(local_20,uStack_1c);
  }
  *param_1 = iVar2;
  param_1[1] = local_20;
  return;
}

