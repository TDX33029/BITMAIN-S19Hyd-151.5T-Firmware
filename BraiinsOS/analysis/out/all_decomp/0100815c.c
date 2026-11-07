// FUN_0100815c @ 0100815c size=384 calls_out=4 calls_in=1
// strings: 

void FUN_0100815c(undefined4 *param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined1 param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_34;
  undefined4 *local_30;
  code *local_2c;
  undefined4 local_28;
  
  piVar5 = (int *)param_2[4];
  *piVar5 = param_3;
  piVar5[6] = 0;
  piVar5[3] = param_5;
  piVar5[4] = param_6;
  piVar5[1] = param_4;
  local_34 = FUN_01818de0(piVar5,param_7);
  iVar2 = *piVar5;
  iVar6 = piVar5[3];
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[3] = 0;
  piVar5[4] = 0;
  uVar3 = *param_2;
  uVar4 = param_2[2];
  *param_2 = uVar3 + (iVar2 - param_3);
  param_2[1] = param_2[1] + (uint)CARRY4(uVar3,iVar2 - param_3);
  param_2[2] = uVar4 + (iVar6 - param_5);
  param_2[3] = param_2[3] + (uint)CARRY4(uVar4,iVar6 - param_5);
  switch(local_34) {
  case 0:
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  case 1:
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 2;
    return;
  case 2:
    iVar2 = piVar5[0xc];
    *param_1 = 1;
    param_1[1] = iVar2;
    return;
  case 0xfffffffb:
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  case 0xfffffffc:
  case 0xfffffffd:
  case 0xfffffffe:
    break;
  default:
    local_30 = &local_34;
    local_2c = FUN_00fac2b8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00593ed6,&local_30,&DAT_01881ff4);
  }
  iVar2 = piVar5[6];
  if (iVar2 == 0) {
    local_2c = (code *)0x0;
    local_28 = local_34;
  }
  else {
    uVar1 = FUN_016dd8a2(iVar2);
    FUN_00fab1e0(&local_30,iVar2,uVar1);
    if (local_30 != (undefined4 *)0x0) {
      local_2c = (code *)0x0;
    }
  }
  *param_1 = 0;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

