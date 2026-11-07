// FUN_006cc54c @ 006cc54c size=728 calls_out=4 calls_in=0
// strings: 

void FUN_006cc54c(undefined4 param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  undefined4 **local_40;
  int local_3c;
  int iStack_38;
  int **local_30;
  undefined1 *local_2c;
  int local_28;
  
  if (*param_2 == -0x80000000) {
    FUN_0160ef04(param_1,&DAT_003dbea8,0x19);
    return;
  }
  if (*param_2 != -0x7fffffff) {
    pbVar7 = (byte *)param_2[1];
    iVar8 = param_2[2];
    puVar4 = (undefined1 *)0x1;
    local_28 = 0;
    local_2c = (undefined1 *)0x1;
    local_30 = (undefined4 **)0x0;
    if (iVar8 != 0) {
      pbVar5 = pbVar7;
      do {
        iVar3 = local_28;
        pbVar12 = pbVar5 + 1;
        puVar11 = (undefined1 *)(uint)*pbVar5;
        if (0x7fffffff < (uint)(int)(char)*pbVar5) {
          if (puVar11 < (undefined1 *)0xe0) {
            puVar11 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar11 & 0x1f) << 6);
            pbVar12 = pbVar5 + 2;
          }
          else {
            uVar9 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (puVar11 < (undefined1 *)0xf0) {
              puVar11 = (undefined1 *)(uVar9 | ((uint)puVar11 & 0x1f) << 0xc);
              pbVar12 = pbVar5 + 3;
            }
            else {
              pbVar12 = pbVar5 + 4;
              puVar11 = (undefined1 *)(pbVar5[3] & 0x3f | uVar9 << 6 | ((uint)puVar11 & 7) << 0x12);
            }
          }
        }
        switch(puVar11) {
        case (undefined1 *)0x8:
          pcVar10 = (char *)&DAT_003dbea4;
          break;
        case (undefined1 *)0x9:
          pcVar10 = (char *)&DAT_0051de5c;
          break;
        case (undefined1 *)0xa:
          pcVar10 = (char *)&DAT_0051de58;
          break;
        case (undefined1 *)0xb:
switchD_006cc61c_caseD_b:
          uVar9 = 1;
          if ((undefined1 *)0x7f < puVar11) {
            uVar9 = 2;
          }
          if (((undefined1 *)0x7ff < puVar11) && (uVar9 = 4, puVar11 < (undefined1 *)0x10000)) {
            uVar9 = 3;
          }
          if ((uint)((int)local_30 - local_28) < uVar9) {
            FUN_0132b898(&local_30,local_28,uVar9,1,1);
          }
          pbVar5 = (byte *)((int)local_2c + local_28);
          if (puVar11 < (undefined1 *)0x80) {
            *pbVar5 = (byte)puVar11;
          }
          else {
            bVar1 = (byte)puVar11 & 0x3f | 0x80;
            bVar6 = (byte)((uint)puVar11 >> 6);
            if (puVar11 < (undefined1 *)0x800) {
              bVar6 = bVar6 | 0xc0;
              pbVar5[1] = bVar1;
            }
            else {
              bVar2 = bVar6 & 0x3f | 0x80;
              bVar6 = (byte)((uint)puVar11 >> 0xc);
              if ((uint)puVar11 >> 0x10 != 0) {
                *pbVar5 = (byte)((uint)puVar11 >> 0x12) | 0xf0;
                pbVar5[3] = bVar1;
                pbVar5[2] = bVar2;
                pbVar5[1] = bVar6 & 0x3f | 0x80;
                goto LAB_006cc778;
              }
              pbVar5[1] = bVar2;
              bVar6 = bVar6 | 0xe0;
              pbVar5[2] = bVar1;
            }
            *pbVar5 = bVar6;
          }
LAB_006cc778:
          local_28 = uVar9 + iVar3;
          puVar4 = local_2c;
          goto LAB_006cc6e8;
        case (undefined1 *)0xc:
          pcVar10 = (char *)&DAT_003dbea6;
          break;
        case (undefined1 *)0xd:
          pcVar10 = (char *)&DAT_0051de5a;
          break;
        default:
          pcVar10 = "\\\\";
          if (puVar11 != (undefined1 *)0x5c) {
            if (puVar11 != &DAT_00110000) goto switchD_006cc61c_caseD_b;
            goto LAB_006cc7e8;
          }
        }
        if ((uint)((int)local_30 - local_28) < 2) {
          FUN_0132b898(&local_30,local_28,2,1,1);
          puVar4 = local_2c;
        }
        *(undefined2 *)((int)puVar4 + local_28) = *(undefined2 *)pcVar10;
        local_28 = local_28 + 2;
LAB_006cc6e8:
        pbVar5 = pbVar12;
      } while (pbVar12 != pbVar7 + iVar8);
    }
LAB_006cc7e8:
    local_40 = local_30;
    local_3c = (int)local_2c;
    iStack_38 = local_28;
    local_2c = &LAB_00632348;
    local_30 = (int **)&local_40;
    FUN_012fa178(param_1,&DAT_01d05f88,&DAT_00578130,&local_30);
    FUN_019bb7e0(local_40,local_3c);
  }
  return;
}

