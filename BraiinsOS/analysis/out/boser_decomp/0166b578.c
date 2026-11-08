// FUN_0166b578 @ 0166b578 size=664 calls_out=9 calls_in=1
// strings: 

void FUN_0166b578(int *param_1,char *param_2,char *param_3,int param_4,int *param_5,
                 undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 local_98;
  char *pcStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  int local_78;
  undefined2 local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int *local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (param_4 == 0) {
    do {
      iVar5 = *param_5;
      bVar2 = (bool)hasExclusiveAccess(param_5);
    } while (!bVar2);
    *param_5 = iVar5 + 1;
    if (-1 < iVar5) {
LAB_0166b754:
      *param_1 = -0x7ffffff6;
      param_1[1] = (int)param_2;
      param_1[2] = (int)param_5;
      return;
    }
  }
  else {
    if (*param_3 != '/') {
      *param_1 = -0x7ffffff6;
      param_1[1] = 0;
      return;
    }
    do {
      iVar5 = *param_5;
      bVar2 = (bool)hasExclusiveAccess(param_5);
    } while (!bVar2);
    *param_5 = iVar5 + 1;
    if (-1 < iVar5) {
      local_7c = 0;
      local_98 = 0x2f;
      uStack_8c = 0;
      local_70 = 1;
      local_74 = 1;
      local_80 = 1;
      local_84 = 0x2f;
      pcStack_94 = param_3;
      iStack_90 = param_4;
      local_88 = param_4;
      local_78 = param_4;
      do {
        if (local_70 == 0) {
          uVar9 = FUN_01a5c3e4(&local_98);
        }
        else {
          local_70 = 0;
          uVar9 = FUN_0070fbd8(&local_98);
        }
        if ((int)uVar9 == 0) goto LAB_0166b754;
        FUN_016792f0(&local_6c,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
        uVar4 = local_64;
        uVar3 = local_68;
        iVar5 = local_6c;
        if (local_6c == -0x7fffffff) goto LAB_0166b754;
        uVar9 = FUN_01673048(param_7,param_2);
        piVar8 = param_5;
        if ((int)uVar9 != 0) {
          FUN_0166956c(&local_60,param_5,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20),param_6);
          piVar8 = local_5c;
          if (local_60 != -0x7ffffff6) {
            param_1[2] = local_58;
            param_1[3] = iStack_54;
            param_1[4] = iStack_50;
            param_1[5] = iStack_4c;
            param_1[6] = iStack_48;
            param_1[7] = iStack_44;
            param_1[8] = local_40;
            param_1[9] = iStack_3c;
            param_1[10] = iStack_38;
            param_1[0xb] = iStack_34;
            param_1[0xc] = iStack_30;
            param_1[0xd] = iStack_2c;
            *param_1 = local_60;
            param_1[1] = (int)local_5c;
            goto LAB_0166b7bc;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *param_5;
            bVar2 = (bool)hasExclusiveAccess(param_5);
          } while (!bVar2);
          *param_5 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01670d04(param_5);
          }
        }
        param_5 = piVar8;
        if (*param_2 == '\x04') {
          uVar10 = FUN_01669480(uVar3,uVar4);
          uVar7 = (uint)(uVar10 >> 0x20);
          if (((uVar10 & 1) == 0) || (*(uint *)(param_2 + 0xc) <= uVar7)) {
LAB_0166b780:
            *param_1 = -0x7ffffff6;
            param_1[1] = 0;
LAB_0166b7bc:
            if (iVar5 != -0x80000000) {
              FUN_019bb7e0(iVar5,uVar3);
            }
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *param_5;
              bVar2 = (bool)hasExclusiveAccess(param_5);
            } while (!bVar2);
            *param_5 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01670d04(param_5);
              return;
            }
            return;
          }
          param_2 = (char *)(*(int *)(param_2 + 8) + uVar7 * 0x18);
        }
        else if ((*param_2 != '\x05') ||
                (param_2 = (char *)FUN_0196b3a8(*(undefined4 *)(param_2 + 4),
                                                *(undefined4 *)(param_2 + 8),uVar3,uVar4),
                param_2 == (char *)0x0)) goto LAB_0166b780;
        if (iVar5 != -0x80000000) {
          FUN_019bb7e0(iVar5,uVar3);
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x166b80c);
  (*pcVar1)();
}

