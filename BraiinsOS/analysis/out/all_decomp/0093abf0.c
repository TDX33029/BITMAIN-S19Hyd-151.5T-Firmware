// FUN_0093abf0 @ 0093abf0 size=1032 calls_out=8 calls_in=1
// strings: power | high_energy_hashrate

int FUN_0093abf0(char *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_38;
  undefined4 *local_34;
  undefined4 local_30 [3];
  
  if (*param_1 != '\0') {
LAB_0093ae08:
    local_30[0] = 10;
    iVar2 = FUN_0157c50c(local_30,0,0);
    return iVar2;
  }
  iVar2 = FUN_00947ca4(param_1,&DAT_0035b865,0xc);
  if (iVar2 == 0) {
    if (*param_1 == '\x01') goto LAB_0093af18;
    puVar6 = *(undefined4 **)(param_1 + 4);
    piVar4 = (int *)*puVar6;
    iVar2 = piVar4[2];
    if ((uint)(*piVar4 - iVar2) < 2) {
      FUN_00933680(piVar4,iVar2,2,1,1);
      iVar2 = piVar4[2];
    }
    piVar4[2] = iVar2 + 2;
    *(undefined2 *)(piVar4[1] + iVar2) = 0x203a;
    piVar4 = (int *)*puVar6;
    iVar2 = piVar4[2];
    iVar3 = *piVar4;
    *(undefined1 *)(puVar6 + 4) = 0;
    puVar6[3] = puVar6[3] + 1;
    if (iVar3 == iVar2) {
      FUN_00933680(piVar4,iVar2,1,1,1);
      iVar2 = piVar4[2];
    }
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    *(undefined1 *)(piVar4[1] + iVar2) = 0x7b;
    piVar4[2] = iVar2 + 1;
    local_38 = CONCAT22(local_38._2_2_,0x100);
    local_34 = puVar6;
    iVar2 = FUN_00949744((int)uVar9,&local_38,"power",5);
    if (iVar2 == 0) {
      if ((char)local_38 != '\0') goto LAB_0093ae08;
      iVar2 = FUN_00947ca4(&local_38,&DAT_0056aaa8,8);
      puVar1 = local_34;
      if (iVar2 == 0) {
        if ((char)local_38 == '\x01') {
LAB_0093af18:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
        }
        piVar4 = (int *)*local_34;
        iVar2 = piVar4[2];
        if ((uint)(*piVar4 - iVar2) < 2) {
          FUN_00933680(piVar4,iVar2,2,1,1);
          iVar2 = piVar4[2];
        }
        piVar4[2] = iVar2 + 2;
        *(undefined2 *)(piVar4[1] + iVar2) = 0x203a;
        iVar2 = FUN_009481cc(param_2,puVar1);
        if (iVar2 == 0) {
          *(undefined1 *)(puVar1 + 4) = 1;
          iVar2 = FUN_00947ca4(&local_38,"high_energy_hashrate",0x14);
          puVar1 = local_34;
          if (iVar2 == 0) {
            if ((char)local_38 != '\x01') {
              piVar4 = (int *)*local_34;
              iVar2 = piVar4[2];
              if ((uint)(*piVar4 - iVar2) < 2) {
                FUN_00933680(piVar4,iVar2,2,1,1);
                iVar2 = piVar4[2];
              }
              iVar5 = *(int *)(param_2 + 0x18);
              iVar3 = *(int *)(param_2 + 0x1c);
              piVar4[2] = iVar2 + 2;
              *(undefined2 *)(piVar4[1] + iVar2) = 0x203a;
              if (iVar5 == 5 && iVar3 == 0) {
                piVar4 = (int *)*puVar1;
                iVar2 = piVar4[2];
                if ((uint)(*piVar4 - iVar2) < 4) {
                  FUN_00933680(piVar4,iVar2,4,1,1);
                  iVar2 = piVar4[2];
                }
                *(undefined4 *)(piVar4[1] + iVar2) = 0x6c6c756e;
                piVar4[2] = iVar2 + 4;
              }
              else {
                iVar2 = FUN_009481cc((int *)(param_2 + 0x18),puVar1);
                if (iVar2 != 0) {
                  return iVar2;
                }
              }
              *(undefined1 *)(puVar1 + 4) = 1;
              if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
                piVar4 = (int *)*puVar1;
                iVar2 = puVar1[3] + -1;
                puVar1[3] = iVar2;
                FUN_00953014(piVar4,&DAT_0041950e,1);
                if (iVar2 != 0) {
                  uVar7 = puVar1[1];
                  uVar8 = puVar1[2];
                  iVar3 = piVar4[2];
                  do {
                    if ((uint)(*piVar4 - iVar3) < uVar8) {
                      FUN_00933680(piVar4,iVar3,uVar8,1,1);
                      iVar3 = piVar4[2];
                    }
                    FUN_016dd1aa(piVar4[1] + iVar3,uVar7,uVar8);
                    iVar3 = iVar3 + uVar8;
                    iVar2 = iVar2 + -1;
                    piVar4[2] = iVar3;
                  } while (iVar2 != 0);
                }
                iVar2 = piVar4[2];
                if (*piVar4 == iVar2) {
                  FUN_00933680(piVar4,iVar2,1,1,1);
                  iVar2 = piVar4[2];
                }
                *(undefined1 *)(piVar4[1] + iVar2) = 0x7d;
                piVar4[2] = iVar2 + 1;
              }
              *(undefined1 *)(puVar6 + 4) = 1;
              return 0;
            }
            goto LAB_0093af18;
          }
        }
      }
    }
  }
  return iVar2;
}

