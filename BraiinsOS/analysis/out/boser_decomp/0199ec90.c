// FUN_0199ec90 @ 0199ec90 size=696 calls_out=7 calls_in=4
// strings: 

void FUN_0199ec90(int *param_1,char *param_2,short *param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  char *pcVar5;
  short *psVar6;
  short *psVar7;
  char **ppcVar8;
  char **ppcVar9;
  char **ppcVar10;
  char **ppcVar11;
  bool bVar12;
  char *local_60;
  short *local_5c;
  short *local_58;
  char **local_44;
  char **local_40;
  undefined4 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  local_60 = param_2;
  local_5c = param_3;
  if (param_3 != (short *)0x0) {
    psVar1 = param_3;
    pcVar5 = param_2;
    do {
      if (*pcVar5 == '/') {
        local_44 = &local_60;
        local_40 = (char **)&DAT_0199ef54;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0058fc27,&local_44,&DAT_01d27bfc);
      }
      pcVar5 = pcVar5 + 1;
      psVar1 = (short *)((int)psVar1 + -1);
    } while (psVar1 != (short *)0x0);
  }
  ppcVar10 = (char **)param_1[1];
  ppcVar11 = (char **)param_1[2];
  local_26 = false;
  if (ppcVar11 != (char **)0x0) {
    local_26 = *(char *)ppcVar10 == '/';
  }
  local_3c = CONCAT31(local_3c._1_3_,6);
  local_28 = 0x201;
  local_44 = ppcVar10;
  local_40 = ppcVar11;
  FUN_01982524(&local_60,&local_44);
  if ((char)local_60 == '\t') {
    psVar1 = local_5c;
    if ((local_58 == (short *)0x2) && (*local_5c == 0x2e2e)) {
      psVar2 = (short *)0x2;
      psVar6 = (short *)0x0;
    }
    else {
      psVar3 = local_58;
      do {
        psVar7 = psVar3;
        psVar2 = (short *)((int)local_5c + (int)psVar7);
        if (psVar2 == local_5c) {
          psVar1 = (short *)0x0;
          psVar6 = local_5c;
          goto LAB_0199edac;
        }
        psVar3 = (short *)((int)psVar7 + -1);
      } while (*(char *)((int)psVar2 + -1) != '.');
      if (psVar3 == (short *)0x0) {
        psVar6 = (short *)0x0;
        psVar7 = local_58;
      }
      else {
        psVar6 = (short *)((int)local_5c + (int)psVar7);
        psVar7 = (short *)((int)local_58 - (int)psVar7);
        local_58 = psVar3;
      }
      psVar2 = local_58;
      local_58 = psVar7;
    }
LAB_0199edac:
    if (psVar1 != (short *)0x0) {
      psVar6 = psVar1;
    }
    if (psVar6 != (short *)0x0) {
      if (psVar1 == (short *)0x0) {
        psVar2 = local_58;
      }
      bVar12 = ppcVar10 <= (char **)((int)psVar6 + (int)psVar2);
      ppcVar8 = (char **)(((int)psVar6 + (int)psVar2) - (int)ppcVar10);
      if (ppcVar8 != (char **)0x0) {
        bVar12 = ppcVar11 <= ppcVar8;
      }
      if ((ppcVar8 != (char **)0x0 && ppcVar8 != ppcVar11) &&
         ((bVar12 ||
          ((0x7fffffff < (uint)(int)((char *)((int)ppcVar10 + (int)ppcVar8))[-1] &&
           (*(char *)((int)ppcVar10 + (int)ppcVar8) < '\0')))))) {
        FUN_0199ef60(ppcVar10,ppcVar11,ppcVar8);
      }
      if (ppcVar8 <= ppcVar11) {
        param_1[2] = (int)ppcVar8;
        ppcVar11 = ppcVar8;
      }
      if (param_3 != (short *)0x0) {
        ppcVar8 = (char **)*param_1;
        uVar4 = (int)param_3 + 1;
        if ((uint)((int)ppcVar8 - (int)ppcVar11) < uVar4) {
          ppcVar9 = (char **)((int)ppcVar11 + uVar4);
          if (CARRY4((uint)ppcVar11,uVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(0);
          }
          FUN_0197ad30(&local_44,ppcVar8,ppcVar10,ppcVar9,1,1);
          if (local_44 == (char **)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(local_40,local_3c);
          }
          *param_1 = (int)ppcVar9;
          param_1[1] = (int)local_40;
          ppcVar10 = local_40;
          ppcVar8 = ppcVar9;
        }
        if (ppcVar8 == ppcVar11) {
          FUN_0197ac30(param_1,ppcVar11,1,1,1);
          ppcVar10 = (char **)param_1[1];
          ppcVar11 = (char **)param_1[2];
        }
        pcVar5 = (char *)((int)ppcVar11 + 1);
        *(char *)((int)ppcVar10 + (int)ppcVar11) = '.';
        param_1[2] = (int)pcVar5;
        if ((short *)(*param_1 - (int)pcVar5) < param_3) {
          FUN_0197ac30(param_1,pcVar5,param_3,1,1);
          pcVar5 = (char *)param_1[2];
        }
        FUN_01bed4e2(pcVar5 + param_1[1],param_2,param_3);
        param_1[2] = (int)(pcVar5 + (int)param_3);
      }
    }
  }
  return;
}

