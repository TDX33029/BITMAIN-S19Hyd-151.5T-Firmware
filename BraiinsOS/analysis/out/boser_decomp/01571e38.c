// FUN_01571e38 @ 01571e38 size=596 calls_out=4 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01571e38(int *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int **ppiVar6;
  int *piVar7;
  char *local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int *local_94;
  char *local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  char *local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_60 [6];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  FUN_01671400(local_60,param_2 + 0x50,"#",1);
  puVar5 = (undefined4 *)((uint)local_60 | 4);
  local_a8 = (char *)*puVar5;
  iStack_a4 = puVar5[1];
  iStack_a0 = puVar5[2];
  iStack_9c = puVar5[3];
  iStack_98 = puVar5[4];
  if (local_60[0] == -0x7ffffff6) {
    if ((((*local_a8 == '\x05') &&
         (local_78 = local_a8, iStack_74 = iStack_a4, iStack_70 = iStack_a0, iStack_6c = iStack_9c,
         iStack_68 = iStack_98,
         pcVar3 = (char *)FUN_0196b3a8(*(undefined4 *)(local_a8 + 4),*(undefined4 *)(local_a8 + 8),
                                       &DAT_00568fe8,0x10), pcVar3 != (char *)0x0)) &&
        (*pcVar3 == '\x01')) && ((pcVar3[1] & 1U) != 0)) {
      local_94 = *(int **)(param_2 + 0x58);
      if (local_94 == (int *)0x0) {
        ppiVar6 = (int **)0x0;
      }
      else {
        do {
          iVar4 = *local_94;
          bVar2 = (bool)hasExclusiveAccess(local_94);
        } while (!bVar2);
        *local_94 = iVar4 + 1;
        if (iVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1572088);
          (*pcVar1)();
        }
        ppiVar6 = &local_94;
      }
      while (ppiVar6 != (int **)0x0) {
        piVar7 = *ppiVar6;
        ppiVar6 = (int **)(piVar7 + 3);
        iVar4 = piVar7[2];
        if (*ppiVar6 == (int *)0x0) {
          ppiVar6 = (int **)0x0;
        }
        FUN_01671400(local_60,param_2 + 0x50,*(undefined4 *)(iVar4 + 0xc),
                     *(undefined4 *)(iVar4 + 0x10));
        local_78 = (char *)*puVar5;
        iStack_74 = puVar5[1];
        iStack_70 = puVar5[2];
        iStack_6c = puVar5[3];
        iStack_68 = puVar5[4];
        if (local_60[0] != -0x7ffffff6) {
          param_1[6] = local_48;
          param_1[7] = iStack_44;
          param_1[8] = iStack_40;
          param_1[9] = iStack_3c;
          param_1[10] = local_38;
          param_1[0xb] = iStack_34;
          param_1[0xc] = iStack_30;
          param_1[0xd] = iStack_2c;
          param_1[1] = (int)local_78;
          param_1[2] = iStack_74;
          param_1[3] = iStack_70;
          param_1[4] = iStack_6c;
          param_1[5] = iStack_68;
          *param_1 = local_60[0];
          FUN_0167294c(&local_94);
          FUN_0150343c((uint)&local_a8 | 4);
          return;
        }
        local_90 = local_78;
        iStack_8c = iStack_74;
        iStack_88 = iStack_70;
        iStack_84 = iStack_6c;
        iStack_80 = iStack_68;
        if (((*local_78 != '\x05') ||
            (pcVar3 = (char *)FUN_0196b3a8(*(undefined4 *)(local_78 + 4),
                                           *(undefined4 *)(local_78 + 8),&DAT_00568fe8,0x10),
            pcVar3 == (char *)0x0)) || ((*pcVar3 != '\x01' || ((pcVar3[1] & 1U) == 0)))) {
          FUN_0150343c((uint)&local_90 | 4);
          break;
        }
        FUN_0150343c((uint)&local_a8 | 4);
        local_a8 = local_90;
        iStack_a4 = iStack_8c;
        iStack_a0 = iStack_88;
        iStack_9c = iStack_84;
        iStack_98 = iStack_80;
      }
      FUN_0167294c(&local_94);
    }
    param_1[1] = (int)local_a8;
    param_1[2] = iStack_a4;
    param_1[3] = iStack_a0;
    param_1[4] = iStack_9c;
    param_1[5] = iStack_98;
    local_60[0] = -0x7ffffff6;
  }
  else {
    param_1[6] = local_48;
    param_1[7] = iStack_44;
    param_1[8] = iStack_40;
    param_1[9] = iStack_3c;
    param_1[10] = local_38;
    param_1[0xb] = iStack_34;
    param_1[0xc] = iStack_30;
    param_1[0xd] = iStack_2c;
    param_1[1] = (int)local_a8;
    param_1[2] = iStack_a4;
    param_1[3] = iStack_a0;
    param_1[4] = iStack_9c;
    param_1[5] = iStack_98;
  }
  *param_1 = local_60[0];
  return;
}

