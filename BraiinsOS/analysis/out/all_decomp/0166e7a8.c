// FUN_0166e7a8 @ 0166e7a8 size=740 calls_out=2 calls_in=1
// strings: 

void FUN_0166e7a8(int *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *unaff_r4;
  int iVar9;
  int iVar10;
  int local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  int local_40;
  char *pcStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  
  iVar7 = *(int *)(param_2 + 0xc);
  iVar10 = 1;
  if (iVar7 != 0) {
    pcVar8 = *(char **)(param_2 + 8);
    iVar5 = iVar7 + -1;
    pcVar4 = pcVar8 + 1;
    cVar1 = *pcVar8;
    *(char **)(param_2 + 8) = pcVar4;
    *(int *)(param_2 + 0xc) = iVar5;
    if (cVar1 == '\n') {
      iVar7 = iVar5;
      pcVar8 = pcVar4;
LAB_0166e850:
      do {
        FUN_0166ef68(&local_40,param_2);
        puVar3 = puStack_2c;
        puVar2 = puStack_30;
        if (local_40 == 3) {
          iVar5 = local_4c;
          puVar6 = local_48;
          pcVar4 = "\n, newline\'`\'\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02";
          iVar9 = 1;
          iVar10 = 3;
          unaff_r4 = local_44;
        }
        else {
          iVar5 = iStack_34;
          puVar6 = puStack_30;
          pcVar4 = pcStack_3c;
          iVar9 = iStack_38;
          iVar10 = local_40;
          local_4c = iStack_34;
          local_48 = puVar2;
          local_44 = puVar3;
          unaff_r4 = puStack_2c;
          if (local_40 == 1) {
            *(char **)(param_2 + 8) = pcVar8;
            *(int *)(param_2 + 0xc) = iVar7;
            if (iVar7 == 0) {
LAB_0166e95c:
              if (pcStack_3c != (char *)0x0) {
                thunk_FUN_016d3fb4(iStack_38);
              }
              if (puVar2 == (undefined4 *)0x0) {
                iVar10 = 1;
                iVar9 = 4;
                pcVar4 = (char *)0x0;
              }
              else {
                if ((code *)*puVar3 != (code *)0x0) {
                  (*(code *)*puVar3)(puVar2);
                }
                iVar10 = 1;
                pcVar4 = (char *)0x0;
                iVar9 = 4;
                if (puVar3[1] != 0) goto LAB_0166e99c;
              }
            }
            else {
              iVar9 = 0;
              do {
                if (pcVar8[iVar9] != ' ' && pcVar8[iVar9] != '\t') goto LAB_0166e8e8;
                iVar9 = iVar9 + 1;
              } while (iVar7 != iVar9);
              iVar9 = iVar7;
LAB_0166e8e8:
              if (iVar9 == 0) goto LAB_0166e95c;
              *(char **)(param_2 + 8) = pcVar8 + iVar9;
              *(int *)(param_2 + 0xc) = iVar7 - iVar9;
              if (pcStack_3c != (char *)0x0) {
                thunk_FUN_016d3fb4(iStack_38);
              }
              pcVar4 = pcVar8;
              if (puVar2 == (undefined4 *)0x0) {
                iVar10 = 3;
              }
              else {
                if ((code *)*puVar3 != (code *)0x0) {
                  (*(code *)*puVar3)(puVar2);
                }
                iVar10 = 3;
                if (puVar3[1] == 0) goto LAB_0166e9c0;
LAB_0166e99c:
                thunk_FUN_016d3fb4(puVar2);
              }
            }
LAB_0166e9c0:
            iVar5 = 0;
            puVar6 = (undefined4 *)0x0;
            unaff_r4 = puVar2;
          }
        }
        if (iVar10 != 3) {
          if (iVar10 == 1) {
            *(char **)(param_2 + 8) = pcVar8;
            *(int *)(param_2 + 0xc) = iVar7;
            if (pcVar4 != (char *)0x0) {
              thunk_FUN_016d3fb4(iVar9);
            }
            if (puVar6 != (undefined4 *)0x0) {
              if ((code *)*unaff_r4 != (code *)0x0) {
                (*(code *)*unaff_r4)(puVar6);
              }
              if (unaff_r4[1] != 0) {
                thunk_FUN_016d3fb4(puVar6);
                *param_1 = 3;
                return;
              }
            }
          }
          else if (iVar10 != 3) goto LAB_0166e82c;
          *param_1 = 3;
          return;
        }
        if (*(int *)(param_2 + 0xc) == iVar7) goto LAB_0166ea70;
        iVar7 = *(int *)(param_2 + 0xc);
        pcVar8 = *(char **)(param_2 + 8);
      } while( true );
    }
    if ((cVar1 == '\r') && (iVar5 != 0)) {
      cVar1 = pcVar8[1];
      *(char **)(param_2 + 8) = pcVar8 + 2;
      *(int *)(param_2 + 0xc) = iVar7 + -2;
      iVar7 = iVar7 + -2;
      pcVar8 = pcVar8 + 2;
      if (cVar1 == '\n') goto LAB_0166e850;
      *(char **)(param_2 + 8) = pcVar4;
      *(int *)(param_2 + 0xc) = iVar5;
      goto LAB_0166ea74;
    }
  }
  pcVar4 = (char *)0x0;
  iVar9 = 4;
  iVar5 = 0;
  puVar6 = (undefined4 *)0x0;
  goto LAB_0166e82c;
LAB_0166ea70:
  iVar10 = 2;
LAB_0166ea74:
  pcVar4 = (char *)0x0;
  iVar9 = 4;
  iVar5 = 0;
  puVar6 = (undefined4 *)0x0;
LAB_0166e82c:
  *param_1 = iVar10;
  param_1[1] = (int)pcVar4;
  param_1[2] = iVar9;
  param_1[3] = iVar5;
  param_1[4] = (int)puVar6;
  param_1[5] = (int)unaff_r4;
  return;
}

