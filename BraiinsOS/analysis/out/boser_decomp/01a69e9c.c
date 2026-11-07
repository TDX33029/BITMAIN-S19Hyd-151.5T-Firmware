// FUN_01a69e9c @ 01a69e9c size=480 calls_out=6 calls_in=1
// strings: 

void FUN_01a69e9c(uint *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  undefined2 uStack_4a;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uVar2 = *param_2;
  if (uVar2 == 2) {
    puVar11 = &DAT_01d2ce48;
    uVar9 = 2;
  }
  else {
    if (uVar2 != 3) {
      uVar1 = param_2[3];
      uVar13 = *(undefined4 *)(param_2 + 6);
      uVar14 = *(undefined4 *)(param_2 + 8);
      uVar10 = *(undefined4 *)(param_2 + 10);
      uVar16 = *(undefined4 *)(param_2 + 0xc);
      uVar7 = *(undefined4 *)(param_2 + 1);
      uVar8 = *(undefined4 *)(param_2 + 4);
      uStack_4a = (undefined2)((uint)uVar7 >> 0x10);
      if ((uVar2 & 1) == 0) {
        puVar11 = (undefined *)FUN_01be9c4e(2,0x80001,0);
        if (puVar11 != (undefined *)0xffffffff) {
          local_40 = 1;
          uVar15 = 2;
          iVar3 = FUN_01be9b78(puVar11,1,2,&local_40,4);
          if (iVar3 != -1) {
            uVar2 = uVar1 << 8 | uVar1 >> 8;
            local_38 = 0;
            uVar6 = 0x10;
            uVar8 = 0;
            goto LAB_01a6a000;
          }
          goto LAB_01a6a044;
        }
LAB_01a6a058:
        puVar4 = (undefined4 *)FUN_01be3244();
        puVar12 = (undefined *)*puVar4;
      }
      else {
        uVar2 = param_2[0xe];
        puVar11 = (undefined *)FUN_01be9c4e(10,0x80001,0);
        if (puVar11 == (undefined *)0xffffffff) goto LAB_01a6a058;
        local_40 = 1;
        iVar3 = FUN_01be9b78(puVar11,1,2,&local_40,4);
        if (iVar3 != -1) {
          local_38 = CONCAT22(uVar1,uStack_4a);
          uVar2 = uVar2 << 8 | uVar2 >> 8;
          uVar6 = 0x1c;
          uVar15 = 10;
          uVar7 = uVar10;
LAB_01a6a000:
          local_40 = CONCAT22(uVar2,uVar15);
          local_3c = uVar7;
          uStack_34 = uVar8;
          uStack_30 = uVar13;
          uStack_2c = uVar14;
          local_28 = uVar16;
          iVar3 = FUN_01be718e(puVar11,&local_40,uVar6);
          if ((iVar3 != -1) && (iVar3 = FUN_01be7e64(puVar11,0x80), iVar3 != -1)) goto LAB_01a69eec;
        }
LAB_01a6a044:
        puVar4 = (undefined4 *)FUN_01be3244();
        puVar12 = (undefined *)*puVar4;
        FUN_01bf01d6(puVar11);
      }
      uVar9 = 0;
      uVar5 = 0;
      goto LAB_01a6a068;
    }
    uVar9 = *(uint *)(param_2 + 2);
    puVar11 = *(undefined **)(param_2 + 4);
  }
  if ((uVar9 & 0xff) == 4) {
LAB_01a69eec:
    param_1[1] = (uint)puVar11;
    *(undefined1 *)param_1 = 4;
    return;
  }
  uVar5 = uVar9 >> 8;
  puVar12 = puVar11;
LAB_01a6a068:
  *param_1 = uVar9 & 0xff | uVar5 << 8;
  param_1[1] = (uint)puVar12;
  return;
}

