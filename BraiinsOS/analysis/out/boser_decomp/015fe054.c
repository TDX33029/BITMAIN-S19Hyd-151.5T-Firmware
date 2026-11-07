// FUN_015fe054 @ 015fe054 size=460 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_015fe054(uint *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  pbVar11 = (byte *)param_1[7];
  pbVar4 = (byte *)param_1[6];
  do {
    uVar10 = *param_1;
    if (uVar10 != 0x110003) {
      iVar8 = 3;
      if (0x10ffff < uVar10) {
        iVar8 = uVar10 - 0x110000;
      }
      if (iVar8 != 0) {
        if (iVar8 == 1) {
          uVar9 = param_1[1];
          *param_1 = (uint)&DAT_00110000;
        }
        else if (iVar8 == 2) {
          uVar9 = param_1[1];
          *param_1 = 0x110001;
          param_1[1] = param_1[2];
        }
        else {
          uVar6 = param_1[1];
          uVar9 = param_1[2];
          *param_1 = 0x110002;
          param_1[1] = uVar10;
          param_1[2] = uVar6;
        }
        iVar8 = (uint)(param_2 >= uVar9 && param_2 != uVar9) - (uint)(param_2 < uVar9);
        uVar5 = 1;
        if (param_2 == uVar9) {
          iVar8 = 2;
          uVar5 = 2;
        }
        goto LAB_015fe204;
      }
      *param_1 = 0x110003;
    }
    if (pbVar4 == (byte *)0x0 || pbVar4 == pbVar11) goto LAB_015fe15c;
    bVar1 = *pbVar4;
    puVar7 = (undefined1 *)(uint)bVar1;
    param_1[6] = (uint)(pbVar4 + 1);
    pbVar3 = pbVar4 + 1;
    if (0x7fffffff < (uint)(int)(char)bVar1) {
      bVar1 = pbVar4[1];
      param_1[6] = (uint)(pbVar4 + 2);
      if (puVar7 < (undefined1 *)0xe0) {
        puVar7 = (undefined1 *)(bVar1 & 0x3f | ((uint)puVar7 & 0x1f) << 6);
        pbVar3 = pbVar4 + 2;
      }
      else {
        bVar2 = pbVar4[2];
        param_1[6] = (uint)(pbVar4 + 3);
        uVar10 = bVar2 & 0x3f | (bVar1 & 0x3f) << 6;
        if (puVar7 < (undefined1 *)0xf0) {
          puVar7 = (undefined1 *)(uVar10 | ((uint)puVar7 & 0x1f) << 0xc);
          pbVar3 = pbVar4 + 3;
        }
        else {
          bVar1 = pbVar4[3];
          param_1[6] = (uint)(pbVar4 + 4);
          puVar7 = (undefined1 *)(bVar1 & 0x3f | uVar10 << 6 | ((uint)puVar7 & 7) << 0x12);
          pbVar3 = pbVar4 + 4;
          if (puVar7 == &DAT_00110000) {
LAB_015fe15c:
            uVar10 = param_1[3];
            if (uVar10 != 0x110003) {
              iVar8 = 3;
              if (0x10ffff < uVar10) {
                iVar8 = uVar10 - 0x110000;
              }
                    /* WARNING: Could not recover jumptable at 0x015fe188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar12 = (*(code *)(&DAT_015fe18c + *(int *)(&DAT_015fe18c + iVar8 * 4)))();
              return uVar12;
            }
            uVar5 = 0;
            iVar8 = 1;
LAB_015fe204:
            return CONCAT44(iVar8,uVar5);
          }
        }
      }
    }
    pbVar4 = pbVar3;
    FUN_01ac6d9c(&local_30,puVar7);
    if (local_30 == 0x110003) goto LAB_015fe15c;
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
  } while( true );
}

