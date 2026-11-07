// FUN_0115e4bc @ 0115e4bc size=292 calls_out=4 calls_in=2
// strings: 

void FUN_0115e4bc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_f0;
  int local_ec;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined1 auStack_d0 [172];
  
  if (param_3 == 0) {
    local_ec = 8;
    local_f0 = 0;
  }
  else {
    local_ec = thunk_FUN_016d4a50(param_3 * 0xb8);
    if (local_ec == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,param_3 * 0xb8);
    }
    iVar3 = param_3 * 0xb8;
    iVar4 = local_ec;
    do {
      local_f0 = param_3;
      if (iVar3 == 0) break;
      iVar2 = *(int *)(param_2 + 8);
      uVar5 = *(undefined4 *)(param_2 + 4);
      if (iVar2 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = thunk_FUN_016d4a50(iVar2);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar2);
        }
      }
      FUN_016dd1aa(iVar1,uVar5,iVar2);
      local_e0 = iVar2;
      local_dc = iVar1;
      local_d8 = iVar2;
      FUN_0115d604(auStack_d0,param_2 + 0x10);
      param_2 = param_2 + 0xb8;
      FUN_016dd1aa(iVar4,&local_e0,0xb8);
      iVar4 = iVar4 + 0xb8;
      iVar3 = iVar3 + -0xb8;
    } while (iVar3 != 0);
  }
  *param_1 = local_f0;
  param_1[1] = local_ec;
  param_1[2] = param_3;
  return;
}

