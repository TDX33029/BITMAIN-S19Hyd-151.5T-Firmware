// FUN_0148a124 @ 0148a124 size=1440 calls_out=4 calls_in=1
// strings: ii_bos_plus_proto::enum_schema::ThermalPauseReason | ii_bos_plus_proto::enum_schema::ThermalPauseReason | ii_bos_plus_proto::enum_schema::ThermalPauseReason

void FUN_0148a124(undefined4 *param_1)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint local_74 [2];
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
  int iStack_30;
  uint local_2c;
  
  FUN_01306b30(&local_68,"ii_bos_plus_proto::enum_schema::ThermalPauseReason",0x32,"<",1);
  if (local_68 == 1) {
    iVar8 = local_2c - 1;
    if (local_44 == 0xffffffff) {
      uVar9 = local_4c + iVar8;
      if (uVar9 < local_34) {
        uVar10 = local_2c;
        if (local_2c < local_58) {
          uVar10 = local_58;
        }
LAB_0148a3c4:
        uVar5 = *(byte *)(local_38 + uVar9) & 0x3f;
        uVar9 = local_60 >> uVar5 | local_5c << (0x20 - uVar5 & 0xff);
        if (-1 < (int)(uVar5 - 0x20)) {
          uVar9 = local_5c >> (uVar5 - 0x20 & 0xff);
        }
        if ((uVar9 & 1) == 0) {
          local_4c = local_4c + local_2c;
        }
        else {
          uVar9 = local_58;
          do {
            uVar5 = uVar9;
            if (uVar10 == uVar5) {
              uVar9 = local_58 - 1;
              goto LAB_0148a43c;
            }
            if (local_34 <= local_4c + uVar5) {
              uVar9 = local_4c + local_58;
              goto LAB_0148a68c;
            }
            uVar9 = uVar5 + 1;
          } while (*(char *)(iStack_30 + uVar5) == *(char *)(local_38 + local_4c + uVar5));
          local_4c = (local_4c - local_58) + uVar5 + 1;
        }
        goto LAB_0148a478;
      }
    }
    else {
      uVar9 = local_4c + iVar8;
      if (uVar9 < local_34) {
        uVar10 = local_44;
LAB_0148a1b8:
        uVar5 = *(byte *)(local_38 + uVar9) & 0x3f;
        uVar9 = local_60 >> uVar5 | local_5c << (0x20 - uVar5 & 0xff);
        if (-1 < (int)(uVar5 - 0x20)) {
          uVar9 = local_5c >> (uVar5 - 0x20 & 0xff);
        }
        if ((uVar9 & 1) == 0) {
          local_4c = local_4c + local_2c;
        }
        else {
          uVar9 = local_58;
          if (local_58 < uVar10) {
            uVar9 = uVar10;
          }
          uVar5 = local_2c;
          if (local_2c < uVar9) {
            uVar5 = uVar9;
          }
          uVar4 = uVar9;
          do {
            uVar6 = uVar4;
            if (uVar5 == uVar6) {
              uVar9 = local_58;
              goto LAB_0148a26c;
            }
            if (local_34 <= local_4c + uVar6) {
              uVar9 = uVar9 + local_4c;
LAB_0148a68c:
              if (uVar9 < local_34) {
                uVar9 = local_34;
              }
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar9,local_34,&DAT_01d2e38c);
            }
            uVar4 = uVar6 + 1;
          } while (*(char *)(iStack_30 + uVar6) == *(char *)(local_38 + local_4c + uVar6));
          local_4c = (local_4c - local_58) + uVar6 + 1;
        }
        uVar10 = 0;
        goto LAB_0148a250;
      }
    }
  }
  else if (local_5c._2_1_ == '\0') {
    uVar9 = local_5c & 0xff;
    do {
      if (local_64 != 0) {
        if (local_64 < local_34) {
          if (*(char *)(local_38 + local_64) < -0x40) goto LAB_0148a698;
        }
        else if (local_64 != local_34) {
LAB_0148a698:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(local_38,local_34,local_64,local_34,&DAT_01d2e39c);
        }
      }
      if (local_64 == local_34) {
        uVar5 = local_34;
        if ((uVar9 & 1) == 0) {
          uVar5 = 0x32;
        }
        goto LAB_0148a48c;
      }
      pbVar11 = (byte *)(local_38 + local_64);
      uVar5 = (uint)*pbVar11;
      if (0x7fffffff < (uint)(int)(char)*pbVar11) {
        if (uVar5 < 0xe0) {
          uVar5 = pbVar11[1] & 0x3f | (uVar5 & 0x1f) << 6;
        }
        else {
          uVar10 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
          if (uVar5 < 0xf0) {
            uVar5 = uVar10 | (uVar5 & 0x1f) << 0xc;
          }
          else {
            uVar5 = pbVar11[3] & 0x3f | uVar10 << 6 | (uVar5 & 7) << 0x12;
          }
        }
      }
      if ((uVar9 & 1) != 0) goto LAB_0148a5e4;
      iVar8 = 1;
      if (0x7f < uVar5) {
        iVar8 = 2;
      }
      uVar9 = 1;
      if ((0x7ff < uVar5) && (iVar8 = 4, uVar5 < 0x10000)) {
        iVar8 = 3;
      }
      local_64 = iVar8 + local_64;
    } while( true );
  }
LAB_0148a488:
  uVar5 = 0x32;
LAB_0148a48c:
  FUN_01306b30(&local_68,"ii_bos_plus_proto::enum_schema::ThermalPauseReason",uVar5,"::",2);
  if (local_68 == 1) {
    FUN_0140d6f0(local_74,&local_60,local_38,local_34,iStack_30,local_2c,local_44 == 0xffffffff);
  }
  else {
    local_74[0] = 0;
    if (local_5c._2_1_ == '\0') {
      if (local_60 == 0) {
        local_60 = 0;
        local_74[0] = local_60;
        if ((local_5c & 0x100) == 0) goto LAB_0148a60c;
      }
      else {
        do {
          pcVar7 = (char *)(local_38 + local_60);
          if (local_60 < local_34) {
            if (*pcVar7 < -0x40) goto LAB_0148a6b0;
          }
          else if (local_60 != local_34) {
LAB_0148a6b0:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(local_38,local_34,0,local_60,&DAT_01d272d4);
          }
          uVar9 = (uint)pcVar7[-1];
          if (0x7fffffff < uVar9) {
            bVar2 = pcVar7[-2];
            if ((char)bVar2 < -0x40) {
              bVar3 = pcVar7[-3];
              if ((char)bVar3 < -0x40) {
                uVar10 = (int)(char)bVar3 & 0x3fU | ((byte)pcVar7[-4] & 7) << 6;
              }
              else {
                uVar10 = bVar3 & 0xf;
              }
              uVar10 = (int)(char)bVar2 & 0x3fU | uVar10 << 6;
            }
            else {
              uVar10 = bVar2 & 0x1f;
            }
            uVar9 = uVar9 & 0x3f | uVar10 << 6;
          }
          if ((local_5c._1_1_ & 1) != 0) goto LAB_0148a600;
          iVar8 = -1;
          if (0x7f < uVar9) {
            iVar8 = -2;
          }
          if ((0x7ff < uVar9) && (iVar8 = -4, uVar9 < 0x10000)) {
            iVar8 = -3;
          }
          local_60 = iVar8 + local_60;
          local_5c._1_1_ = 1;
        } while (local_60 != 0);
        local_60 = 0;
      }
LAB_0148a600:
      local_74[0] = 1;
      local_6c = local_60;
    }
  }
LAB_0148a60c:
  if (local_74[0] == 1) {
    local_74[0] = uVar5 - local_6c;
    pcVar7 = "ii_bos_plus_proto::enum_schema::ThermalPauseReason" + local_6c;
  }
  else {
    pcVar7 = (char *)0x0;
  }
  if (pcVar7 == (char *)0x0) {
    pcVar7 = "ii_bos_plus_proto::enum_schema::ThermalPauseReason";
    local_74[0] = uVar5;
  }
  *param_1 = 0x80000000;
  param_1[1] = pcVar7;
  param_1[2] = local_74[0];
  return;
  while( true ) {
    if (local_2c <= local_58 - 1) goto LAB_0148a660;
    uVar5 = local_4c + uVar9;
    if (local_34 <= uVar5) goto LAB_0148a670;
    pcVar7 = (char *)(local_38 + local_4c + uVar9);
    pcVar1 = (char *)(iStack_30 + uVar9);
    uVar9 = uVar9 - 1;
    if (*pcVar1 != *pcVar7) break;
LAB_0148a43c:
    uVar5 = local_4c;
    if (uVar9 == 0xffffffff) goto LAB_0148a48c;
  }
  local_4c = local_4c + local_50;
LAB_0148a478:
  uVar9 = local_4c + iVar8;
  if (local_34 <= uVar9) goto LAB_0148a488;
  goto LAB_0148a3c4;
LAB_0148a26c:
  do {
    uVar5 = local_4c;
    if (uVar9 <= uVar10) goto LAB_0148a48c;
    uVar9 = uVar9 - 1;
    if (local_2c <= uVar9) {
LAB_0148a660:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar9,local_2c,&DAT_01d2e36c);
    }
    uVar5 = uVar9 + local_4c;
    if (local_34 <= uVar5) {
LAB_0148a670:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar5,local_34,&DAT_01d2e37c);
    }
  } while (*(char *)(iStack_30 + uVar9) == *(char *)(local_38 + uVar5));
  local_4c = local_4c + local_50;
  uVar10 = local_2c - local_50;
LAB_0148a250:
  uVar9 = local_4c + iVar8;
  if (local_34 <= uVar9) goto LAB_0148a488;
  goto LAB_0148a1b8;
LAB_0148a5e4:
  uVar5 = local_64;
  goto LAB_0148a48c;
}

