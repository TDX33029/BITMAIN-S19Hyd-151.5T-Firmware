// FUN_00c7fde4 @ 00c7fde4 size=396 calls_out=6 calls_in=2
// strings: 

void FUN_00c7fde4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x10) <= uVar2) {
LAB_00c7fec0:
    local_28 = 5;
    uVar1 = FUN_00c629ac(param_2,&local_28);
    *param_1 = 1;
    param_1[1] = uVar1;
    return;
  }
LAB_00c7fe00:
  uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
  switch(uVar3) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_00c7fe18_caseD_9;
  default:
    if (9 < uVar3 - 0x30) {
      uVar1 = FUN_00c7f220(param_2,&local_28,&DAT_01873d48);
      uVar1 = FUN_011da0d4(uVar1,param_2);
      param_1[1] = uVar1;
      *param_1 = 1;
      return;
    }
    FUN_011b4dc8(&local_28,param_2,1);
    uVar4 = CONCAT44(uStack_1c,local_20);
    if (local_28 == 3 && local_24 == 0) {
      *param_1 = 1;
      param_1[1] = local_20;
      return;
    }
    if (local_28 == 2) {
LAB_00c7ffb0:
      uVar4 = FUN_01845d5c();
      goto LAB_00c7ffb4;
    }
    if (local_28 != 1) goto LAB_00c7ffb4;
    break;
  case 0x2d:
    *(uint *)(param_2 + 0x14) = uVar2 + 1;
    FUN_011b4dc8(&local_28,param_2,0);
    uVar4 = CONCAT44(uStack_1c,local_20);
    if (local_28 == 3 && local_24 == 0) {
      *param_1 = 1;
      param_1[1] = local_20;
      return;
    }
    if (local_28 == 0) goto LAB_00c7ffb4;
    if (local_28 != 1) goto LAB_00c7ffb0;
  }
  uVar4 = FUN_01845f30();
LAB_00c7ffb4:
  *(undefined8 *)(param_1 + 2) = uVar4;
  *param_1 = 0;
  return;
switchD_00c7fe18_caseD_9:
  uVar2 = uVar2 + 1;
  *(uint *)(param_2 + 0x14) = uVar2;
  if (*(uint *)(param_2 + 0x10) == uVar2) goto LAB_00c7fec0;
  goto LAB_00c7fe00;
}

