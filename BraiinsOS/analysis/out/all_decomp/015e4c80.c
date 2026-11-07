// FUN_015e4c80 @ 015e4c80 size=732 calls_out=7 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x015e4da0) */

void FUN_015e4c80(int *param_1,char *param_2,short *param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined1 *puVar5;
  char *pcVar6;
  short *psVar7;
  short *psVar8;
  char **ppcVar9;
  char **ppcVar10;
  char **ppcVar11;
  char **ppcVar12;
  bool bVar13;
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
    pcVar6 = param_2;
    do {
      if (*pcVar6 == '/') {
        local_44 = &local_60;
        local_40 = (char **)&DAT_015e4f68;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0058f8a1,&local_44,&DAT_018aafd4);
      }
      pcVar6 = pcVar6 + 1;
      psVar1 = (short *)((int)psVar1 + -1);
    } while (psVar1 != (short *)0x0);
  }
  ppcVar11 = (char **)param_1[1];
  ppcVar12 = (char **)param_1[2];
  local_26 = false;
  if (ppcVar12 != (char **)0x0) {
    local_26 = *(char *)ppcVar11 == '/';
  }
  local_3c = CONCAT31(local_3c._1_3_,6);
  local_28 = 0x201;
  local_44 = ppcVar11;
  local_40 = ppcVar12;
  FUN_015c7164(&local_60,&local_44);
  if ((char)local_60 == '\t') {
    psVar8 = local_58;
    psVar1 = local_5c;
    if ((local_58 == (short *)&SUB_00000002) && (*local_5c == 0x2e2e)) {
      psVar2 = (short *)&SUB_00000002;
      psVar7 = (short *)0x0;
      if (local_5c != (short *)0x0) {
        psVar7 = local_5c;
      }
    }
    else {
      psVar4 = local_58;
      do {
        psVar3 = psVar4;
        psVar2 = (short *)((int)local_5c + (int)psVar3);
        if (psVar2 == local_5c) {
          psVar1 = (short *)0x0;
          psVar7 = local_5c;
          goto joined_r0x015e4da8;
        }
        psVar4 = (short *)((int)psVar3 + -1);
      } while (*(char *)((int)psVar2 + -1) != '.');
      if (psVar4 == (short *)0x0) {
        psVar7 = (short *)0x0;
      }
      else {
        psVar7 = (short *)((int)local_5c + (int)psVar3);
        psVar8 = (short *)((int)local_58 - (int)psVar3);
        local_58 = psVar4;
      }
      psVar2 = local_58;
      if (local_5c != (short *)0x0) {
        psVar7 = local_5c;
      }
    }
joined_r0x015e4da8:
    if (psVar7 != (short *)0x0) {
      if (psVar1 == (short *)0x0) {
        psVar2 = psVar8;
      }
      bVar13 = ppcVar11 <= (char **)((int)psVar7 + (int)psVar2);
      ppcVar9 = (char **)(((int)psVar7 + (int)psVar2) - (int)ppcVar11);
      if (ppcVar9 != (char **)0x0) {
        bVar13 = ppcVar12 <= ppcVar9;
      }
      if ((ppcVar9 != (char **)0x0 && ppcVar9 != ppcVar12) &&
         ((bVar13 ||
          ((0x7fffffff < (uint)(int)((char *)((int)ppcVar11 + (int)ppcVar9))[-1] &&
           (*(char *)((int)ppcVar11 + (int)ppcVar9) < '\0')))))) {
        FUN_015e4f74(ppcVar11,ppcVar12,ppcVar9);
      }
      if (ppcVar9 <= ppcVar12) {
        param_1[2] = (int)ppcVar9;
        ppcVar12 = ppcVar9;
      }
      if (param_3 != (short *)0x0) {
        ppcVar9 = (char **)*param_1;
        puVar5 = (undefined1 *)((int)param_3 + 1);
        if ((undefined1 *)((int)ppcVar9 - (int)ppcVar12) < puVar5) {
          ppcVar10 = (char **)((int)ppcVar12 + (int)puVar5);
          if (CARRY4((uint)ppcVar12,(uint)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0);
          }
          FUN_015bf51c(&local_44,ppcVar9,ppcVar11,ppcVar10,1,1);
          if (local_44 == (char **)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(local_40,local_3c);
          }
          *param_1 = (int)ppcVar10;
          param_1[1] = (int)local_40;
          ppcVar11 = local_40;
          ppcVar9 = ppcVar10;
        }
        if (ppcVar9 == ppcVar12) {
          FUN_015bf41c(param_1,ppcVar12,1,1,1);
          ppcVar11 = (char **)param_1[1];
          ppcVar12 = (char **)param_1[2];
        }
        pcVar6 = (char *)((int)ppcVar12 + 1);
        *(char *)((int)ppcVar11 + (int)ppcVar12) = '.';
        param_1[2] = (int)pcVar6;
        if ((short *)(*param_1 - (int)pcVar6) < param_3) {
          FUN_015bf41c(param_1,pcVar6,param_3,1,1);
          pcVar6 = (char *)param_1[2];
        }
        FUN_016dd1aa(pcVar6 + param_1[1],param_2,param_3);
        param_1[2] = (int)(pcVar6 + (int)param_3);
        return;
      }
    }
  }
  return;
}

