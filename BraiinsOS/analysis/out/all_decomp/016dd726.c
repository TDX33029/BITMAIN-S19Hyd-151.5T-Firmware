// FUN_016dd726 @ 016dd726 size=124 calls_out=1 calls_in=1
// strings: 

uint * FUN_016dd726(uint *param_1,uint *param_2,byte *param_3,undefined4 param_4)

{
  byte *pbVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)param_2 ^ (uint)param_1;
  puVar2 = param_2;
  pbVar3 = param_3;
  if ((uVar4 & 3) == 0) {
    while (uVar4 = (int)puVar2 << 0x1e, uVar4 != 0) {
      if (pbVar3 == (byte *)0x0) goto LAB_016dd796;
      uVar4 = *puVar2;
      *(byte *)param_1 = (byte)uVar4;
      if ((byte)uVar4 == 0) {
        uVar4 = 0;
        goto LAB_016dd796;
      }
      pbVar3 = pbVar3 + -1;
      param_1 = (uint *)((int)param_1 + 1);
      puVar2 = (uint *)((int)puVar2 + 1);
    }
    if ((pbVar3 == (byte *)0x0) || (uVar4 = (uint)(byte)*puVar2, uVar4 == 0)) goto LAB_016dd796;
    param_2 = puVar2;
    while (param_3 = (byte *)((int)puVar2 + ((int)pbVar3 - (int)param_2)),
          param_2 != (uint *)(((uint)pbVar3 & 0xfffffffc) + (int)puVar2)) {
      uVar5 = *param_2;
      uVar4 = uVar5 + 0xfefefeff & ~uVar5;
      if ((uVar4 & 0x80808080) != 0) break;
      *param_1 = uVar5;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  pbVar1 = (byte *)((int)param_2 + -1);
  for (; pbVar3 = param_3, param_3 != (byte *)0x0; param_3 = param_3 + -1) {
    pbVar1 = pbVar1 + 1;
    uVar4 = (uint)*pbVar1;
    *(byte *)param_1 = *pbVar1;
    if (uVar4 == 0) break;
    param_1 = (uint *)((int)param_1 + 1);
  }
LAB_016dd796:
  FUN_016dd606(param_1,0,pbVar3,uVar4,param_4);
  return param_1;
}

