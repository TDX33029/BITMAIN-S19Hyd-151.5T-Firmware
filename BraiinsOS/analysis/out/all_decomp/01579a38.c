// FUN_01579a38 @ 01579a38 size=436 calls_out=0 calls_in=0
// strings: 

void FUN_01579a38(int *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  if (param_3 < 8) {
    if (param_3 != 0) {
      bVar8 = true;
      if (*param_2 == '.') goto LAB_01579b5c;
      if (param_3 != 1) {
        if (param_2[1] == '.') goto LAB_01579b5c;
        if (param_3 != 2) {
          if (param_2[2] == '.') goto LAB_01579b5c;
          if (param_3 != 3) {
            if (param_2[3] == '.') goto LAB_01579b5c;
            if (param_3 != 4) {
              if (param_2[4] == '.') goto LAB_01579b5c;
              if (param_3 != 5) {
                if ((param_2[5] != '.') && (bVar8 = false, param_3 != 6)) {
                  bVar8 = param_2[6] == '.';
                }
                goto LAB_01579b5c;
              }
            }
          }
        }
      }
    }
    bVar8 = false;
    goto LAB_01579b5c;
  }
  uVar1 = ((uint)(param_2 + 3) & 0xfffffffc) - (int)param_2;
  if (uVar1 == 0) {
    uVar1 = 0;
LAB_01579a84:
    do {
      uVar6 = *(uint *)(param_2 + uVar1);
      uVar5 = *(uint *)((int)(param_2 + uVar1) + 4) ^ 0x2e2e2e2e;
      if (((0x1010100 - (uVar6 ^ 0x2e2e2e2e) | uVar6) & 0x80808080 & (0x1010100 - uVar5 | uVar5)) !=
          0x80808080) break;
      uVar1 = uVar1 + 8;
    } while (uVar1 <= param_3 - 8);
  }
  else {
    iVar4 = (int)param_2 - ((uint)(param_2 + 3) & 0xfffffffc);
    pcVar2 = param_2;
    do {
      if (*pcVar2 == '.') {
        bVar8 = true;
        goto LAB_01579b5c;
      }
      bVar8 = iVar4 != -1;
      iVar4 = iVar4 + 1;
      pcVar2 = pcVar2 + 1;
    } while (bVar8);
    if (uVar1 <= param_3 - 8) goto LAB_01579a84;
  }
  bVar8 = false;
  if (param_3 != uVar1) {
    iVar4 = ~uVar1 + param_3;
    pcVar2 = param_2 + uVar1;
    do {
      bVar8 = *pcVar2 == '.';
      if (*pcVar2 == '.') break;
      bVar7 = iVar4 != 0;
      iVar4 = iVar4 + -1;
      pcVar2 = pcVar2 + 1;
    } while (bVar7);
  }
LAB_01579b5c:
  uVar3 = *(undefined4 *)*param_1;
  iVar4 = ((undefined4 *)*param_1)[1];
  *(byte *)(param_1 + 1) = bVar8 | *(byte *)(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x01579b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar4 + 0xc))(uVar3);
  return;
}

