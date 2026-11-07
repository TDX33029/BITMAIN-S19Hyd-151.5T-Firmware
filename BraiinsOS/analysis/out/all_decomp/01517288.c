// FUN_01517288 @ 01517288 size=360 calls_out=4 calls_in=1
// strings: SingleProtocolName

void FUN_01517288(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_0152d84c(&local_28,&DAT_018a7730,param_2);
  if ((char)local_28 != '\x18') {
    *(char *)(param_1 + 1) = (char)local_28;
    *(undefined1 *)((int)param_1 + 7) = local_28._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_28._1_2_;
    param_1[2] = local_24;
    param_1[3] = local_20;
    *param_1 = 1;
    return;
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  if (uVar3 - uVar4 < local_24) {
    local_1c = 0;
    local_20 = 0xb;
    iVar2 = 4;
  }
  else {
    uVar1 = uVar4 + local_24;
    param_2[2] = uVar1;
    if ((CARRY4(uVar4,local_24)) || (uVar3 < uVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar4,uVar1,uVar3,&DAT_018a78f8);
    }
    local_30 = local_24;
    local_2c = 0;
    local_34 = *param_2 + uVar4;
    FUN_015406c4(&local_28,&local_34);
    if (local_28 != 1) {
      if (local_30 <= local_2c) {
        param_1[1] = local_24;
        *param_1 = 0;
        param_1[2] = local_20;
        param_1[3] = local_1c;
        return;
      }
      *(undefined1 *)(param_1 + 1) = 0xf;
      *param_1 = 1;
      param_1[2] = "SingleProtocolName";
      param_1[3] = 0x12;
      if (local_24 != 0) {
        thunk_FUN_016d3fb4();
      }
      return;
    }
    param_1[1] = local_24;
    iVar2 = 8;
  }
  *(undefined4 *)((int)param_1 + iVar2) = local_20;
  *param_1 = 1;
  param_1[3] = local_1c;
  return;
}

