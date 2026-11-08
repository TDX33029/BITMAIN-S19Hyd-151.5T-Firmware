// FUN_01235d00 @ 01235d00 size=560 calls_out=8 calls_in=1
// strings: 

void FUN_01235d00(int *param_1,uint *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined1 uStack_21;
  
  uVar4 = *param_2;
  uVar2 = uVar4 ^ 0x80000000;
  puVar5 = (uint *)0x0;
  uVar3 = 0x15;
  if ((int)uVar4 < 0) {
    uVar3 = uVar2;
  }
  if (1 < uVar3 - 0xc) {
    if (uVar3 != 0x15) {
      FUN_01962d40(&local_58);
      FUN_01a41ac0(param_1,&local_58,&DAT_01cf9ccc,&DAT_01d064b8);
      return;
    }
    if (param_2[2] != 1) {
      local_58 = CONCAT31(local_58._1_3_,0xb);
      FUN_0123bf08(param_1,&local_58,&DAT_01cf9cc4,&DAT_01d064b8);
      return;
    }
    param_2 = (uint *)param_2[1];
    puVar5 = param_2 + 4;
    uVar4 = *param_2;
    uVar2 = uVar4 ^ 0x80000000;
  }
  uVar3 = 0x15;
  if ((int)uVar4 < 0) {
    uVar3 = uVar2;
  }
  switch(uVar3) {
  case 1:
    uVar3 = (uint)(byte)param_2[1];
    uVar2 = 0;
    break;
  default:
    FUN_01222458(&local_58,param_2,&uStack_21,&DAT_01c24a1c);
    goto LAB_01235e10;
  case 4:
    uVar3 = param_2[2];
    uVar2 = param_2[3];
    break;
  case 0xc:
    uVar3 = param_2[2];
    uVar2 = param_2[3];
    goto LAB_01235e00;
  case 0xd:
    uVar3 = param_2[1];
    uVar2 = param_2[2];
LAB_01235e00:
    FUN_01236e54(&local_58,uVar3,uVar2);
    goto LAB_01235e10;
  case 0xe:
    uVar3 = param_2[2];
    uVar2 = param_2[3];
    goto LAB_01235dd8;
  case 0xf:
    uVar3 = param_2[1];
    uVar2 = param_2[2];
LAB_01235dd8:
    FUN_01236c88(&local_58,uVar3,uVar2);
    goto LAB_01235e10;
  }
  FUN_01233920(&local_58,param_2,uVar3,uVar2);
LAB_01235e10:
  if (local_58 != 2) {
    *(undefined2 *)((int)param_1 + 5) = local_54._1_2_;
    *(undefined1 *)((int)param_1 + 7) = local_54._3_1_;
    param_1[3] = local_4c;
    param_1[4] = iStack_48;
    param_1[5] = iStack_44;
    param_1[6] = local_40;
    param_1[7] = local_3c;
    param_1[8] = iStack_38;
    param_1[9] = iStack_34;
    param_1[10] = iStack_30;
    param_1[0xb] = iStack_2c;
    param_1[2] = local_50;
    *(undefined1 *)(param_1 + 1) = (undefined1)local_54;
    *param_1 = local_58;
    return;
  }
  if ((local_54 & 1) == 0) {
    FUN_01223e50(&local_58,puVar5);
    if (local_58 != 2) goto LAB_01235ed8;
    uVar1 = 0;
  }
  else {
    FUN_01223e50(&local_58,puVar5);
    if (local_58 != 2) {
LAB_01235ed8:
      param_1[1] = local_54;
      param_1[2] = local_50;
      param_1[3] = local_4c;
      param_1[4] = iStack_48;
      param_1[5] = iStack_44;
      param_1[6] = local_40;
      param_1[7] = local_3c;
      param_1[8] = iStack_38;
      param_1[9] = iStack_34;
      param_1[10] = iStack_30;
      param_1[0xb] = iStack_2c;
      *param_1 = local_58;
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 2;
  return;
}

