// FUN_01afa738 @ 01afa738 size=208 calls_out=1 calls_in=2
// strings: 

void FUN_01afa738(uint *param_1,int *param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *extraout_r1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int in_r12;
  int extraout_r12;
  
  iVar7 = param_2[3];
  uVar5 = param_2[2];
  uVar1 = param_2[1];
  uVar3 = uVar5;
  if (iVar7 != 0) {
    uVar3 = 0xffffffff;
  }
  uVar6 = uVar1 - uVar3;
  iVar4 = 0;
  if (uVar1 < uVar3) {
    uVar6 = 0;
  }
  uVar3 = uVar5;
  if ((uint)(uVar5 <= uVar1) <= (uint)-iVar7) {
    uVar3 = uVar1;
  }
  if (uVar6 < param_4) {
    uVar3 = 2;
    puVar2 = (undefined1 *)0x24000000;
    in_r12 = 0x1d308;
  }
  else {
    puVar2 = (undefined1 *)(*param_2 + uVar3);
    if (param_4 == 1) {
      *param_3 = *puVar2;
    }
    else {
      FUN_01bed4e2(param_3,puVar2,param_4);
      puVar2 = extraout_r1;
      in_r12 = extraout_r12;
    }
    uVar1 = uVar5 + param_4;
    uVar3 = 4;
    iVar4 = iVar7 + (uint)CARRY4(uVar5,param_4);
  }
  *param_1 = uVar3 | (int)puVar2 << 8;
  param_1[1] = in_r12 << 8 | (uint)puVar2 >> 0x18;
  param_2[2] = uVar1;
  param_2[3] = iVar4;
  return;
}

