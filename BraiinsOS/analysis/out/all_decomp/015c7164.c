// FUN_015c7164 @ 015c7164 size=1260 calls_out=3 calls_in=24
// strings: 

void FUN_015c7164(char *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  uint local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  bVar1 = *(byte *)(param_2 + 7);
  if (bVar1 != 3) {
    bVar3 = *(byte *)((int)param_2 + 0x1d);
    pcVar5 = (char *)*param_2;
    uVar4 = param_2[1];
    bVar7 = bVar3 != 3;
    if (bVar1 < 2) {
      if ((*(byte *)((int)param_2 + 0x1e) & 1) == 0) {
        if (bVar7 && bVar1 <= bVar3) {
LAB_015c7344:
          do {
            if (bVar3 == 1) {
              *(undefined1 *)((int)param_2 + 0x1d) = 3;
              if (uVar4 == 0) break;
              if (uVar4 == 1) {
                if (*pcVar5 != '.') break;
              }
              else if ((*pcVar5 != '.') || (pcVar5[1] != '/')) break;
              cVar6 = '\a';
              if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,0xffffffff,0,&DAT_018ab650);
              }
              goto LAB_015c7508;
            }
            if (bVar3 != 2) goto LAB_015c7610;
            if (uVar4 == 0) {
LAB_015c739c:
              if (uVar4 == 0) {
LAB_015c73a4:
                bVar3 = 1;
                *(undefined1 *)((int)param_2 + 0x1d) = 1;
                goto LAB_015c7344;
              }
            }
            else if (uVar4 == 1) {
              if (*pcVar5 == '.') goto LAB_015c73a4;
            }
            else {
              cVar6 = *pcVar5;
              bVar7 = cVar6 == '.';
              if (bVar7) {
                cVar6 = pcVar5[1];
              }
              if (!bVar7 || cVar6 != '/') goto LAB_015c739c;
              if (uVar4 < 2) goto LAB_015c73a4;
            }
            FUN_015e5844(&local_44);
            *(undefined4 *)param_1 = local_40;
            *(undefined4 *)(param_1 + 4) = uStack_3c;
            *(undefined4 *)(param_1 + 8) = uStack_38;
            *(undefined4 *)(param_1 + 0xc) = local_34;
            *(undefined4 *)(param_1 + 0x10) = uStack_30;
            *(undefined4 *)(param_1 + 0x14) = uStack_2c;
            *(undefined4 *)(param_1 + 0x18) = uStack_28;
            uVar2 = uVar4 - local_44;
            if (uVar4 < local_44) goto LAB_015c75f8;
            cVar6 = *param_1;
            bVar3 = 2;
            param_2[1] = uVar2;
            uVar4 = uVar2;
            if (cVar6 != '\n') {
              return;
            }
          } while( true );
        }
      }
      else if (bVar7 && bVar1 <= bVar3) {
        while (bVar3 != 1) {
          if (bVar3 != 2) goto LAB_015c7610;
          if (uVar4 < 2) {
            bVar3 = 1;
            *(undefined1 *)((int)param_2 + 0x1d) = 1;
          }
          else {
            FUN_015e5844(&local_44);
            *(undefined4 *)param_1 = local_40;
            *(undefined4 *)(param_1 + 4) = uStack_3c;
            *(undefined4 *)(param_1 + 8) = uStack_38;
            *(undefined4 *)(param_1 + 0xc) = local_34;
            *(undefined4 *)(param_1 + 0x10) = uStack_30;
            *(undefined4 *)(param_1 + 0x14) = uStack_2c;
            *(undefined4 *)(param_1 + 0x18) = uStack_28;
            uVar2 = uVar4 - local_44;
            if (uVar4 < local_44) goto LAB_015c75f8;
            cVar6 = *param_1;
            bVar3 = 2;
            param_2[1] = uVar2;
            uVar4 = uVar2;
            if (cVar6 != '\n') {
              return;
            }
          }
        }
LAB_015c74f0:
        cVar6 = '\x06';
        *(undefined1 *)((int)param_2 + 0x1d) = 3;
        if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,0xffffffff,0,&DAT_018ab660);
        }
LAB_015c7508:
        param_2[1] = uVar4 - 1;
        *param_1 = cVar6;
        return;
      }
    }
    else if ((*(byte *)((int)param_2 + 0x1e) & 1) == 0) {
      if (bVar7 && bVar1 <= bVar3) {
        if (bVar3 != 1) {
          if (bVar3 == 2) {
            if (uVar4 != 0) {
              FUN_015e5844(&local_44);
              *(undefined4 *)param_1 = local_40;
              *(undefined4 *)(param_1 + 4) = uStack_3c;
              *(undefined4 *)(param_1 + 8) = uStack_38;
              *(undefined4 *)(param_1 + 0xc) = local_34;
              *(undefined4 *)(param_1 + 0x10) = uStack_30;
              *(undefined4 *)(param_1 + 0x14) = uStack_2c;
              *(undefined4 *)(param_1 + 0x18) = uStack_28;
              uVar2 = uVar4 - local_44;
              if (uVar4 < local_44) goto LAB_015c75f8;
              cVar6 = *param_1;
              param_2[1] = uVar2;
              if (cVar6 != '\n') {
                return;
              }
              uVar4 = uVar2;
              while (uVar4 != 0) {
                FUN_015e5844(&local_44);
                *(undefined4 *)param_1 = local_40;
                *(undefined4 *)(param_1 + 4) = uStack_3c;
                *(undefined4 *)(param_1 + 8) = uStack_38;
                *(undefined4 *)(param_1 + 0xc) = local_34;
                *(undefined4 *)(param_1 + 0x10) = uStack_30;
                *(undefined4 *)(param_1 + 0x14) = uStack_2c;
                *(undefined4 *)(param_1 + 0x18) = uStack_28;
                uVar2 = uVar4 - local_44;
                if (uVar4 < local_44) goto LAB_015c75f8;
                cVar6 = *param_1;
                param_2[1] = uVar2;
                uVar4 = uVar2;
                if (cVar6 != '\n') {
                  return;
                }
              }
            }
            goto LAB_015c7540;
          }
          goto LAB_015c7610;
        }
        *(undefined1 *)((int)param_2 + 0x1d) = 3;
        if (uVar4 != 0) {
          if (uVar4 == 1) {
            uVar4 = 1;
            if (*pcVar5 == '.') goto LAB_015c75d4;
          }
          else {
            cVar6 = *pcVar5;
            bVar7 = cVar6 == '.';
            if (bVar7) {
              cVar6 = pcVar5[1];
            }
            if (bVar7 && cVar6 == '/') {
LAB_015c75d4:
              param_2[1] = uVar4 - 1;
              *param_1 = '\a';
              return;
            }
          }
        }
      }
    }
    else if (bVar7 && bVar1 <= bVar3) {
      if (bVar3 == 1) goto LAB_015c74f0;
      if (bVar3 == 2) {
        if (uVar4 != 0) {
          FUN_015e5844(&local_44);
          uVar2 = uVar4 - local_44;
          *(undefined4 *)param_1 = local_40;
          *(undefined4 *)(param_1 + 4) = uStack_3c;
          *(undefined4 *)(param_1 + 8) = uStack_38;
          *(undefined4 *)(param_1 + 0xc) = local_34;
          *(undefined4 *)(param_1 + 0x10) = uStack_30;
          *(undefined4 *)(param_1 + 0x14) = uStack_2c;
          *(undefined4 *)(param_1 + 0x18) = uStack_28;
          if (uVar4 < local_44) {
LAB_015c75f8:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar2,uVar4,&DAT_018ab670);
          }
          cVar6 = *param_1;
          param_2[1] = uVar2;
          if (cVar6 != '\n') {
            return;
          }
          uVar4 = uVar2;
          while (uVar4 != 0) {
            FUN_015e5844(&local_44);
            *(undefined4 *)param_1 = local_40;
            *(undefined4 *)(param_1 + 4) = uStack_3c;
            *(undefined4 *)(param_1 + 8) = uStack_38;
            *(undefined4 *)(param_1 + 0xc) = local_34;
            *(undefined4 *)(param_1 + 0x10) = uStack_30;
            *(undefined4 *)(param_1 + 0x14) = uStack_2c;
            *(undefined4 *)(param_1 + 0x18) = uStack_28;
            uVar2 = uVar4 - local_44;
            if (uVar4 < local_44) goto LAB_015c75f8;
            cVar6 = *param_1;
            param_2[1] = uVar2;
            uVar4 = uVar2;
            if (cVar6 != '\n') {
              return;
            }
          }
        }
LAB_015c7540:
        *(undefined1 *)((int)param_2 + 0x1d) = 1;
        *param_1 = '\n';
        return;
      }
LAB_015c7610:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ab680);
    }
  }
  *param_1 = '\n';
  return;
}

