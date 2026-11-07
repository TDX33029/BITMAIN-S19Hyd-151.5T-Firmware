// FUN_00aeefc8 @ 00aeefc8 size=260 calls_out=4 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00aef084) */
/* WARNING: Removing unreachable block (ram,0x00aef0bc) */
/* WARNING: Removing unreachable block (ram,0x00aef09c) */

void FUN_00aeefc8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_420 [512];
  undefined4 local_220 [128];
  
  iVar1 = thunk_FUN_01be5118(0xc60);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,0xc60);
  }
  iVar3 = 0;
  do {
    iVar2 = 0;
    do {
      local_220[iVar2 * 2] = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x40);
    FUN_01bed4e2(auStack_420,local_220,0x200);
    iVar2 = iVar1 + iVar3 * 0x210;
    FUN_01bed4e2(iVar2,auStack_420,0x200);
    *(int *)(iVar2 + 0x208) = iVar3;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar2 + 0x200) = 0;
    *(undefined4 *)(iVar2 + 0x204) = 0;
  } while (iVar3 != 6);
  param_1[3] = 0;
  *param_1 = iVar1;
  param_1[1] = 6;
  param_1[2] = 0;
  return;
}

