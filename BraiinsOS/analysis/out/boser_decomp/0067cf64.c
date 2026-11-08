// FUN_0067cf64 @ 0067cf64 size=136 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0067cf64(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  puVar1 = (uint *)param_1[2];
  iVar7 = param_1[4];
  iVar3 = *param_1;
  uVar4 = param_1[1];
  do {
    if (uVar4 == 0) {
      puVar2 = puVar1;
      if (iVar7 == 0) {
        return CONCAT44(param_4,param_3);
      }
      do {
        puVar1 = puVar2 + 1;
        uVar4 = *puVar2;
        iVar3 = iVar3 + -0x60;
        puVar2 = puVar1;
      } while ((uVar4 & 0x80808080) == 0x80808080);
      uVar4 = uVar4 & 0x80808080 ^ 0x80808080;
    }
    iVar7 = iVar7 + -1;
    uVar5 = LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                    uVar4 >> 0x18);
    iVar6 = iVar3 + ((uVar5 >> 3) * -2 - (uVar5 >> 3)) * 8;
    uVar5 = *(uint *)(iVar6 + -8);
    bVar8 = CARRY4(uVar5,param_3);
    param_3 = uVar5 + param_3;
    param_4 = *(int *)(iVar6 + -4) + param_4 + (uint)bVar8;
    uVar4 = uVar4 - 1 & uVar4;
  } while( true );
}

