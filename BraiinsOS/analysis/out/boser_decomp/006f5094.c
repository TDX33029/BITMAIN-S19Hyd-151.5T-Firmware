// FUN_006f5094 @ 006f5094 size=212 calls_out=5 calls_in=27
// strings: 

ulonglong FUN_006f5094(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  
  uVar3 = *(uint *)(param_1 + 0x88);
  uVar2 = 0;
  if ((!CARRY4(uVar3,param_3)) && (uVar3 + param_3 <= *(uint *)(param_1 + 0x84))) {
    iVar1 = thunk_FUN_01bed842(param_2,*(int *)(param_1 + 0x80) + uVar3,param_3);
    uVar2 = (uint)(iVar1 == 0);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x88) = uVar3 + param_3;
    }
  }
  if (*(char *)(param_1 + 0x7c) != '\0') {
    iVar1 = FUN_01298504(param_3,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
    FUN_01bed4e2(iVar1,param_2,param_3);
    local_30 = 0;
    local_2c = param_3;
    local_28 = iVar1;
    local_24 = param_3;
    FUN_006e7f1c(param_1,uVar3,&local_30,uVar2);
  }
  return CONCAT44(param_1,uVar2) ^ 1;
}

