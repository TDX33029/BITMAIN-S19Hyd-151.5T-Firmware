// FUN_00932f04 @ 00932f04 size=512 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_00932f04(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 auStack_1a [10];
  
  puVar8 = (uint *)*param_1;
  if ((param_2[2] & 0x2000000) == 0) {
    if ((param_2[2] & 0x4000000) != 0) {
      uVar4 = *puVar8;
      iVar1 = 7;
      do {
        iVar7 = iVar1;
        uVar9 = uVar4 & 0xf;
        uVar4 = uVar4 >> 4;
        auStack_1a[iVar7] = (&DAT_005642f0)[uVar9];
        iVar1 = iVar7 + -1;
      } while (uVar4 != 0);
      goto LAB_00932fcc;
    }
    iVar1 = FUN_00fabc64(*puVar8,auStack_1a);
    iVar1 = FUN_00fa9698(param_2,1,1,0,auStack_1a + iVar1,10 - iVar1);
  }
  else {
    uVar4 = *puVar8;
    iVar1 = 7;
    do {
      iVar7 = iVar1;
      uVar9 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      auStack_1a[iVar7] = (&DAT_00563e90)[uVar9];
      iVar1 = iVar7 + -1;
    } while (uVar4 != 0);
LAB_00932fcc:
    iVar1 = FUN_00fa9698(param_2,1,"0x",2,auStack_1a + iVar7,9 - (iVar7 + 1));
  }
  if ((iVar1 != 0) ||
     (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418617,2), iVar1 != 0)) {
    return 1;
  }
  if ((param_2[2] & 0x2000000) == 0) {
    if ((param_2[2] & 0x4000000) == 0) {
      iVar1 = FUN_00fabc64(puVar8[1],auStack_1a);
      iVar3 = 10 - iVar1;
      puVar2 = auStack_1a + iVar1;
      pcVar5 = (char *)0x1;
      uVar6 = 0;
      goto LAB_009330e4;
    }
    uVar4 = puVar8[1];
    iVar1 = 7;
    do {
      iVar7 = iVar1;
      uVar9 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      auStack_1a[iVar7] = (&DAT_005642f0)[uVar9];
      iVar1 = iVar7 + -1;
    } while (uVar4 != 0);
  }
  else {
    uVar4 = puVar8[1];
    iVar1 = 7;
    do {
      iVar7 = iVar1;
      uVar9 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      auStack_1a[iVar7] = (&DAT_00563e90)[uVar9];
      iVar1 = iVar7 + -1;
    } while (uVar4 != 0);
  }
  iVar3 = 9 - (iVar7 + 1);
  puVar2 = auStack_1a + iVar7;
  pcVar5 = "0x";
  uVar6 = 2;
LAB_009330e4:
  uVar6 = FUN_00fa9698(param_2,1,pcVar5,uVar6,puVar2,iVar3);
  return uVar6;
}

