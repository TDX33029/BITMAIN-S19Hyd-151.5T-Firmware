// FUN_018a4684 @ 018a4684 size=1088 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018a4684(undefined4 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar13;
  byte *pbVar12;
  int iVar14;
  uint local_8c;
  uint local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  int local_50;
  uint local_4c;
  uint local_44;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  
  local_5c = CONCAT13(local_5c._3_1_,
                      CONCAT12(local_5c._2_1_,CONCAT11(local_5c._1_1_,(byte)local_5c)));
  FUN_01306b30(&local_68,param_2,param_3,"0",1);
  cVar2 = local_5c._2_1_;
  local_6c = local_44;
  iVar14 = local_38 + local_4c;
LAB_018a4708:
  bVar9 = (byte)local_5c;
  while (local_68 == 0) {
    bVar10 = bVar9;
    if (cVar2 != '\0') {
LAB_018a492c:
      local_64 = param_3;
      goto LAB_018a4934;
    }
    bVar10 = ~bVar9 & 1;
    if (local_64 == 0) {
LAB_018a4740:
      if (local_64 == local_34) goto LAB_018a4768;
      bVar1 = bVar9 & 1;
      bVar9 = bVar10;
      if (bVar1 == 0) {
LAB_018a4934:
        local_5c = CONCAT31(local_5c._1_3_,bVar10);
        local_4c = local_64;
        goto LAB_018a493c;
      }
    }
    else {
      if (local_64 < local_34) {
        if (*(char *)(local_38 + local_64) < -0x40) goto LAB_018a4aac;
        goto LAB_018a4740;
      }
      if (local_64 != local_34) {
LAB_018a4aac:
        local_5c = CONCAT31(local_5c._1_3_,~bVar9) & 0xffffff01;
                    /* WARNING: Subroutine does not return */
        FUN_012fb514();
      }
LAB_018a4768:
      bVar1 = bVar9 & 1;
      bVar9 = bVar10;
      if (bVar1 == 0) goto LAB_018a492c;
    }
  }
  local_5c = CONCAT31(local_5c._1_3_,bVar9);
  if (local_4c == local_34) {
    local_4c = param_3;
  }
  else {
    uVar11 = local_4c + (local_2c - 1);
    if (uVar11 < local_34) {
      local_8c = local_6c;
      local_70 = local_6c;
      uVar4 = local_4c;
LAB_018a47dc:
      if (local_4c == uVar4) {
        uVar4 = *(byte *)(local_38 + uVar11) & 0x3f;
        uVar11 = local_60 >> uVar4 | local_5c << (0x20 - uVar4 & 0xff);
        if (-1 < (int)(uVar4 - 0x20)) {
          uVar11 = local_5c >> (uVar4 - 0x20 & 0xff);
        }
        if ((uVar11 & 1) == 0) {
          uVar11 = 0;
          uVar4 = local_4c + local_2c;
        }
        else {
          uVar11 = local_58;
          if (local_58 < local_70) {
            uVar11 = local_70;
          }
          if (local_6c == 0xffffffff) {
            uVar11 = local_58;
          }
          uVar4 = local_2c;
          if (local_2c < uVar11) {
            uVar4 = uVar11;
          }
          uVar6 = uVar11;
          do {
            uVar5 = uVar6;
            if (uVar4 == uVar5) {
              uVar11 = local_58;
              uVar4 = local_6c + 1;
              if (local_6c + 1 != 0) {
                uVar4 = local_70;
              }
              goto LAB_018a48a0;
            }
            if (local_34 <= local_4c + uVar5) {
              uVar4 = uVar11 + local_4c;
              if (uVar11 + local_4c < local_34) {
                uVar4 = local_34;
              }
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar4,local_34,&DAT_01d2e38c);
            }
            uVar6 = uVar5 + 1;
          } while (*(char *)(local_30 + uVar5) == *(char *)(iVar14 + uVar5));
          uVar4 = (local_4c - local_58) + 1 + uVar5;
          uVar11 = 0;
        }
        goto LAB_018a48d8;
      }
    }
  }
LAB_018a493c:
  uVar3 = 0;
  if (0x10 < param_3 - local_4c) goto LAB_018a4a28;
  uVar4 = 0;
  uVar11 = 0;
  if (param_3 == local_4c) goto LAB_018a4a1c;
  uVar11 = 0;
  pbVar13 = (byte *)(param_2 + local_4c);
  goto LAB_018a4974;
  while( true ) {
    uVar11 = uVar11 - 1;
    if (local_2c <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar11,local_2c,&DAT_01d2e36c);
    }
    uVar6 = uVar11 + local_4c;
    if (local_34 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6,local_34,&DAT_01d2e37c);
    }
    if (*(char *)(local_30 + uVar11) != *(char *)(local_38 + uVar6)) break;
LAB_018a48a0:
    if (uVar11 <= uVar4) {
      iVar14 = iVar14 + local_2c;
      if (local_6c != 0xffffffff) {
        local_8c = 0;
      }
      local_4c = local_4c + local_2c;
      local_6c = local_8c;
      goto LAB_018a4708;
    }
  }
  uVar4 = local_4c + local_50;
  uVar11 = local_2c - local_50;
LAB_018a48d8:
  if (local_6c != 0xffffffff) {
    local_8c = uVar11;
    local_70 = uVar11;
  }
  uVar11 = uVar4 + (local_2c - 1);
  if (local_34 <= uVar11) goto LAB_018a493c;
  goto LAB_018a47dc;
LAB_018a4974:
  do {
    pbVar12 = pbVar13 + 1;
    puVar7 = (undefined1 *)(uint)*pbVar13;
    if (0x7fffffff < (uint)(int)(char)*pbVar13) {
      if (puVar7 < (undefined1 *)0xe0) {
        puVar7 = (undefined1 *)(pbVar13[1] & 0x3f | ((uint)puVar7 & 0x1f) << 6);
        pbVar12 = pbVar13 + 2;
      }
      else {
        uVar6 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
        if (puVar7 < (undefined1 *)0xf0) {
          puVar7 = (undefined1 *)(uVar6 | ((uint)puVar7 & 0x1f) << 0xc);
          pbVar12 = pbVar13 + 3;
        }
        else {
          puVar7 = (undefined1 *)(pbVar13[3] & 0x3f | uVar6 << 6 | ((uint)puVar7 & 7) << 0x12);
          if (puVar7 == &DAT_00110000) break;
          pbVar12 = pbVar13 + 4;
        }
      }
    }
    puVar8 = puVar7 + -0x30;
    if ((undefined1 *)0x39 < puVar7) {
      puVar8 = (undefined1 *)(((uint)(puVar7 + -0x41) & 0xffffffdf) + 10);
    }
    if ((undefined1 *)0xf < puVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d22264);
    }
    uVar6 = (uint)puVar8 | uVar11 << 4;
    uVar4 = uVar4 << 4 | uVar11 >> 0x1c;
    uVar11 = uVar6;
    pbVar13 = pbVar12;
  } while (pbVar12 != (byte *)(param_2 + param_3));
LAB_018a4a1c:
  uVar3 = 1;
  param_1[2] = uVar11;
  param_1[3] = uVar4;
LAB_018a4a28:
  *param_1 = uVar3;
  param_1[1] = 0;
  return;
}

