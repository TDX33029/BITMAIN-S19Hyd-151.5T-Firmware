// FUN_01aa4a9c @ 01aa4a9c size=924 calls_out=4 calls_in=1
// strings: 

void FUN_01aa4a9c(undefined2 *param_1,short *param_2,uint param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined1 auStack_80 [48];
  int local_50;
  uint local_40;
  uint local_3c;
  char local_38;
  char cStack_37;
  int local_2c;
  int local_28;
  uint local_24;
  
  if (param_3 == 7) {
    iVar4 = thunk_FUN_01bed842(param_2,&DAT_00531066,7);
    uVar5 = 7;
    if (iVar4 == 0) {
      uVar3 = 2;
      goto LAB_01aa4e14;
    }
LAB_01aa4aec:
    FUN_01306b30(auStack_80,param_2,uVar5,&DAT_0053109c,2);
    FUN_01116c3c(&local_2c,auStack_80);
    uVar5 = param_3;
    if (local_2c == 0) {
LAB_01aa4bac:
      uVar5 = FUN_01aa4e44(param_2,param_3,param_3);
      uVar12 = (undefined1)(uVar5 >> 8);
      if ((uVar5 & 1) == 0) {
        *(undefined1 *)((int)param_1 + 1) = uVar12;
        *(undefined1 *)param_1 = 0;
        param_1[1] = (short)(uVar5 >> 0x10);
        return;
      }
      *(undefined1 *)(param_1 + 1) = uVar12;
      *param_1 = 0x103;
      return;
    }
  }
  else {
    uVar5 = param_3;
    if (2 < param_3) goto LAB_01aa4aec;
    if ((param_3 != 2) || (*param_2 != 0x6372)) goto LAB_01aa4bac;
    uVar5 = 2;
  }
  FUN_01306b30(auStack_80,param_2,uVar5,&DAT_0056c9b8,4);
  iVar4 = local_50;
  local_38 = '\x01';
  cStack_37 = '\0';
  local_40 = 0;
  local_3c = param_3;
  FUN_01116c3c(&local_2c,auStack_80);
  uVar5 = local_40;
  if (local_2c == 1) {
    local_40 = local_24;
    iVar8 = local_28 - uVar5;
LAB_01aa4c48:
    uVar5 = FUN_01aa4e44(iVar4 + uVar5,iVar8);
    iVar4 = local_50;
    uVar1 = (undefined1)(uVar5 >> 8);
    if ((uVar5 & 1) == 0) {
      uVar12 = 0;
      uVar11 = 3;
      if (cStack_37 == '\0') {
        FUN_01116c3c(&local_2c,auStack_80);
        if (local_2c == 1) {
          local_3c = local_28 - local_40;
          local_50 = iVar4;
LAB_01aa4cec:
          pbVar6 = (byte *)(local_50 + local_40);
          if (local_3c == 0) {
            uVar11 = 1;
          }
          else if (local_3c == 1) {
            bVar9 = *pbVar6;
            uVar11 = 1;
            if (bVar9 == 0x2b) {
LAB_01aa4e04:
              uVar11 = 1;
              uVar12 = 1;
            }
            else {
              uVar12 = 1;
              if (bVar9 != 0x2d) goto LAB_01aa4d28;
            }
          }
          else {
            bVar9 = *pbVar6;
LAB_01aa4d28:
            if (bVar9 == 0x2b) {
              pbVar6 = pbVar6 + 1;
              local_3c = local_3c - 1;
            }
            if (local_3c < 3) {
              if (local_3c != 0) {
                uVar10 = 0;
                bVar7 = local_3c == 1;
                do {
                  bVar9 = *pbVar6;
                  if (9 < bVar9 - 0x30) goto LAB_01aa4e04;
                  pbVar6 = pbVar6 + 1;
                  bVar2 = !bVar7;
                  bVar7 = true;
                  uVar10 = (bVar9 - 0x30) + uVar10 * 10;
                } while (bVar2);
LAB_01aa4d7c:
                if ((uVar10 & 0xff) != 0) {
                  *(char *)(param_1 + 2) = (char)uVar10;
                  param_1[1] = (short)(uVar5 >> 0x10);
                  uVar3 = 1;
                  *(undefined1 *)((int)param_1 + 1) = uVar1;
                  goto LAB_01aa4e14;
                }
              }
              uVar11 = 4;
              goto LAB_01aa4df8;
            }
            uVar10 = 0;
            do {
              if (local_3c == 0) goto LAB_01aa4d7c;
              uVar10 = (uVar10 & 0xff) * 4 + (uVar10 & 0xff);
              if (uVar10 >> 7 != 0) {
                uVar12 = 1;
                uVar11 = 1;
                if (*pbVar6 - 0x30 < 10) {
                  uVar12 = 2;
                }
                goto LAB_01aa4e08;
              }
              uVar13 = *pbVar6 - 0x30;
              uVar11 = 1;
              if (9 < uVar13) goto LAB_01aa4e04;
              local_3c = local_3c - 1;
              uVar10 = (uVar10 * 2 & 0xff) + (uVar13 & 0xff);
              pbVar6 = pbVar6 + 1;
            } while ((uVar10 & 0xffffff00) == 0);
            uVar12 = 2;
          }
        }
        else {
          uVar11 = 3;
          if ((cStack_37 == '\0') && ((local_38 == '\x01' || (local_3c != local_40)))) {
            local_3c = local_3c - local_40;
            goto LAB_01aa4cec;
          }
LAB_01aa4df8:
          uVar12 = 0;
        }
      }
    }
    else {
      uVar11 = 1;
      uVar12 = uVar1;
    }
  }
  else {
    if ((cStack_37 == '\0') && ((cStack_37 = '\x01', local_38 == '\x01' || (local_3c != local_40))))
    {
      iVar8 = local_3c - local_40;
      iVar4 = local_50;
      goto LAB_01aa4c48;
    }
    uVar12 = 0;
    uVar11 = 2;
  }
LAB_01aa4e08:
  uVar3 = 3;
  *(undefined1 *)(param_1 + 1) = uVar12;
  *(undefined1 *)((int)param_1 + 1) = uVar11;
LAB_01aa4e14:
  *(undefined1 *)param_1 = uVar3;
  return;
}

