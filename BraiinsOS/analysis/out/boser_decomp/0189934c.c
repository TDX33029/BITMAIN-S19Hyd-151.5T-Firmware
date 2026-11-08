// FUN_0189934c @ 0189934c size=700 calls_out=11 calls_in=2
// strings: InvalidEncoding | InvalidEncoding | InvalidEncoding | TooSmall | TooSmall

void FUN_0189934c(uint *param_1,char *param_2,int param_3,byte *param_4,uint param_5,uint param_6,
                 uint param_7,undefined4 param_8,uint param_9,uint param_10)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong local_58;
  undefined8 local_50;
  uint local_48;
  undefined8 local_44;
  ulonglong local_38;
  undefined8 local_30;
  uint local_28;
  
  if ((param_3 != 0) && (*param_2 == '\0')) {
    uVar8 = 0xf;
    pcVar7 = "InvalidEncoding";
    goto LAB_018994b0;
  }
  FUN_0189ba04(&local_58,param_3 + 3U >> 2);
  uVar10 = FUN_0189b9a4(&local_58);
  iVar5 = (int)(uVar10 >> 0x20);
  puVar2 = (undefined4 *)uVar10;
  iVar3 = FUN_01895ca0(param_2,param_3,puVar2,iVar5);
  if (iVar3 == 0) {
    uVar8 = 8;
    pcVar7 = &DAT_005708a8;
    if (uVar10 < 0x10100000000) {
      if (uVar10 < 0x400000000) goto LAB_018993b8;
      iVar3 = FUN_01bd4fd4(puVar2,iVar5);
      if (iVar3 == 0) {
        iVar3 = FUN_01bd5070(puVar2,3,iVar5);
        if (iVar3 == 0) {
          uVar11 = FUN_01bcfa80(*puVar2,puVar2[1]);
          uVar4 = FUN_01895f10(puVar2,iVar5);
          if (param_6 >> 10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_0051d31c,0x26,&DAT_01d2132c);
          }
          uVar6 = uVar4;
          if ((uVar4 & 7) != 0) {
            uVar6 = uVar4 + 8;
          }
          if ((uVar6 & 0xfffffff8) < param_6) {
            pcVar7 = "TooSmall";
          }
          else if (uVar4 <= param_7) {
            local_28 = uVar4;
            local_30 = uVar11;
            local_38 = uVar10;
            local_44 = FUN_018947e4(&local_38);
            uVar8 = (uint)local_44;
            uVar6 = 8;
            if (param_5 < 6) {
              if (param_5 != 0) {
                uVar8 = (uint)*param_4;
              }
              uVar6 = 0xf;
              pcVar7 = "InvalidEncoding";
              if (param_5 != 0 && uVar8 != 0) {
                uVar8 = 0;
                uVar9 = 0;
                do {
                  bVar1 = *param_4;
                  uVar9 = uVar9 << 8 | uVar8 >> 0x18;
                  param_5 = param_5 - 1;
                  uVar8 = (uint)bVar1 | uVar8 << 8;
                  param_4 = param_4 + 1;
                } while (param_5 != 0);
                if (param_10 < uVar9 || uVar9 - param_10 < (uint)(param_9 <= uVar8)) {
                  uVar6 = 8;
                  pcVar7 = &DAT_005708a8;
                  if (uVar9 < 2) {
                    if ((bVar1 & 1) != 0) {
                      *(ulonglong *)(param_1 + 2) = uVar10;
                      *(undefined8 *)(param_1 + 4) = uVar11;
                      param_1[6] = uVar4;
                      *(undefined8 *)(param_1 + 7) = local_44;
                      *param_1 = uVar8;
                      param_1[1] = -(bVar1 & 1) & uVar9;
                      return;
                    }
                    uVar6 = 0x10;
                    pcVar7 = &DAT_00569538;
                  }
                }
                else {
                  uVar6 = 8;
                  pcVar7 = "TooSmall";
                }
              }
            }
            else {
              pcVar7 = &DAT_005708a8;
            }
            param_1[3] = uVar6;
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = (uint)pcVar7;
            local_48 = uVar4;
            local_50 = uVar11;
            local_58 = uVar10;
            FUN_01899664(&local_58);
            return;
          }
        }
        else {
          uVar8 = 0xf;
          pcVar7 = &DAT_0051d665;
        }
      }
      else {
        uVar8 = 0x10;
        pcVar7 = &DAT_00569538;
      }
    }
  }
  else {
LAB_018993b8:
    uVar8 = 0xf;
    pcVar7 = &DAT_0051d665;
    if (iVar5 == 0) goto LAB_018994b0;
  }
  thunk_FUN_01be4678(puVar2);
LAB_018994b0:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (uint)pcVar7;
  param_1[3] = uVar8;
  return;
}

