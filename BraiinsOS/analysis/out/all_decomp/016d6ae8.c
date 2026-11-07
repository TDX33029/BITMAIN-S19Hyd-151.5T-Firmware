// FUN_016d6ae8 @ 016d6ae8 size=550 calls_out=2 calls_in=1
// strings: 

byte * FUN_016d6ae8(uint *param_1,undefined4 *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  puVar9 = (uint *)*param_2;
  puVar4 = param_2;
  pbVar7 = param_3;
  if (param_4 != (int *)0x0) {
    iVar5 = *param_4;
    puVar4 = (undefined4 *)0x0;
    if (iVar5 != 0) {
      bVar1 = (byte)*puVar9;
      uVar3 = ((uint)(bVar1 >> 3) + (iVar5 >> 0x1a) | (bVar1 >> 3) - 0x10) & 0xfffffff8;
      if (param_1 == (uint *)0x0) {
        if (uVar3 == 0) goto LAB_016d6cd2;
        goto LAB_016d6bea;
      }
      *param_4 = 0;
      if (uVar3 == 0) goto LAB_016d6b1c;
      puVar9 = (uint *)((int)puVar9 + -1);
LAB_016d6cb6:
      puVar4 = (undefined4 *)FUN_016d2bc8();
      *puVar4 = 0x54;
LAB_016d6cbe:
      param_3 = (byte *)0xffffffff;
      goto LAB_016d6cc2;
    }
  }
  iVar5 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  if (**(int **)(iVar5 + -0x18) == 0) {
    if (param_1 == (uint *)0x0) {
      pbVar7 = (byte *)FUN_016dd8a2(puVar9,puVar4,param_3,param_4);
      return pbVar7;
    }
    for (; pbVar7 != (byte *)0x0; pbVar7 = pbVar7 + -1) {
      if ((byte)*puVar9 == 0) {
        *param_1 = 0;
        *param_2 = 0;
        return param_3 + -(int)pbVar7;
      }
      *param_1 = (int)(char)(byte)*puVar9 & 0xdfff;
      puVar9 = (uint *)((int)puVar9 + 1);
      param_1 = param_1 + 1;
    }
  }
  else {
    pbVar8 = param_3;
    if (param_1 == (uint *)0x0) {
LAB_016d6cf8:
      while (uVar3 = (uint)(byte)*puVar9, pbVar7 = pbVar8, puVar10 = puVar9, uVar3 - 1 < 0x7f) {
        if (((uint)puVar9 & 3) == 0) {
          puVar2 = puVar9;
          do {
            puVar10 = puVar2;
            pbVar7 = (byte *)((int)puVar9 + ((int)pbVar8 - (int)puVar10));
            puVar2 = puVar10 + 1;
          } while (((*puVar10 + 0xfefefeff | *puVar10) & 0x80808080) == 0);
          uVar3 = (uint)(byte)*puVar10;
          if (0x7e < uVar3 - 1) break;
        }
        puVar9 = (uint *)((int)puVar10 + 1);
        pbVar8 = pbVar7 + -1;
      }
      if (uVar3 - 0xc2 < 0x33) {
        iVar5 = *(int *)(&DAT_00427af8 + (uVar3 - 0xc2) * 4);
        uVar3 = (uint)(*(byte *)((int)puVar10 + 1) >> 3);
        if (((uVar3 - 0x10 | uVar3 + (iVar5 >> 0x1a)) & 0xfffffff8) == 0) {
          puVar9 = (uint *)((int)puVar10 + 1);
LAB_016d6cd2:
          if (iVar5 << 6 < 0) {
            if (0x3f < *(byte *)((int)puVar9 + 1) - 0x80) goto LAB_016d6bea;
            if (iVar5 << 0xc < 0) {
              if (0x3f < *(byte *)((int)puVar9 + 2) - 0x80) goto LAB_016d6bea;
              puVar9 = (uint *)((int)puVar9 + 3);
            }
            else {
              puVar9 = (uint *)((int)puVar9 + 2);
            }
          }
          else {
            puVar9 = (uint *)((int)puVar9 + 1);
          }
          pbVar8 = pbVar7 + -1;
          goto LAB_016d6cf8;
        }
        if (iVar5 != 0) goto LAB_016d6bea;
        uVar3 = (uint)(byte)*puVar10;
      }
      if (uVar3 == 0) goto LAB_016d6c78;
LAB_016d6bea:
      puVar4 = (undefined4 *)FUN_016d2bc8();
      *puVar4 = 0x54;
      return (byte *)0xffffffff;
    }
    while (pbVar7 != (byte *)0x0) {
      uVar3 = (uint)(byte)*puVar9;
      if (uVar3 - 1 < 0x7f) {
        if (((uint)puVar9 & 3) == 0) {
          for (; (byte *)0x4 < pbVar7; pbVar7 = pbVar7 + -4) {
            if (((*puVar9 + 0xfefefeff | *puVar9) & 0x80808080) != 0) break;
            *param_1 = uVar3;
            param_1[1] = (uint)*(byte *)((int)puVar9 + 1);
            param_1[2] = (uint)*(byte *)((int)puVar9 + 2);
            param_1[3] = (uint)*(byte *)((int)puVar9 + 3);
            uVar3 = (uint)(byte)puVar9[1];
            param_1 = param_1 + 4;
            puVar9 = puVar9 + 1;
          }
          if (0x7e < uVar3 - 1) goto LAB_016d6c3e;
        }
        puVar9 = (uint *)((int)puVar9 + 1);
        *param_1 = uVar3;
        pbVar7 = pbVar7 + -1;
        param_1 = param_1 + 1;
      }
      else {
LAB_016d6c3e:
        if (0x32 < uVar3 - 0xc2) {
          if (uVar3 == 0) {
LAB_016d6c70:
            if (param_1 != (uint *)0x0) {
              *param_1 = 0;
              *param_2 = 0;
            }
LAB_016d6c78:
            return param_3 + -(int)pbVar7;
          }
          goto LAB_016d6cb6;
        }
        bVar1 = *(byte *)((int)puVar9 + 1);
        iVar5 = *(int *)(&DAT_00427af8 + (uVar3 - 0xc2) * 4);
        if ((((bVar1 >> 3) - 0x10 | (uint)(bVar1 >> 3) + (iVar5 >> 0x1a)) & 0xfffffff8) != 0) {
          if (iVar5 != 0) goto LAB_016d6cb6;
          if ((byte)*puVar9 == 0) goto LAB_016d6c70;
LAB_016d6c86:
          puVar4 = (undefined4 *)FUN_016d2bc8();
          *puVar4 = 0x54;
          if (param_1 == (uint *)0x0) {
            return (byte *)0xffffffff;
          }
          goto LAB_016d6cbe;
        }
        puVar9 = (uint *)((int)puVar9 + 1);
LAB_016d6b1c:
        uVar3 = bVar1 - 0x80 | iVar5 << 6;
        if ((int)uVar3 < 0) {
          uVar6 = *(byte *)((int)puVar9 + 1) - 0x80;
          if (0x3f < uVar6) {
LAB_016d6c84:
            puVar9 = (uint *)((int)puVar9 + -1);
            goto LAB_016d6c86;
          }
          uVar3 = uVar6 | uVar3 << 6;
          if ((int)uVar3 < 0) {
            uVar6 = *(byte *)((int)puVar9 + 2) - 0x80;
            if (0x3f < uVar6) goto LAB_016d6c84;
            uVar3 = uVar6 | uVar3 << 6;
            puVar9 = (uint *)((int)puVar9 + 3);
          }
          else {
            puVar9 = (uint *)((int)puVar9 + 2);
          }
        }
        else {
          puVar9 = (uint *)((int)puVar9 + 1);
        }
        *param_1 = uVar3;
        pbVar7 = pbVar7 + -1;
        param_1 = param_1 + 1;
      }
    }
  }
LAB_016d6cc2:
  *param_2 = puVar9;
  return param_3;
}

