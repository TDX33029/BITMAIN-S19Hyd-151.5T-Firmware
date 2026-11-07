// FUN_013048dc @ 013048dc size=552 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_013048dc(undefined4 *param_1,undefined2 *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined2 *puVar10;
  uint6 uVar11;
  undefined6 uVar12;
  uint local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  if (param_3 == 0) {
    uVar3 = 0;
    uVar7 = 0;
  }
  else {
    uVar8 = *param_1;
    uVar5 = param_1[1];
    if (param_3 != 1) {
      FUN_01304258(&local_34,param_1);
      uVar7 = 0;
      if ((char)local_34 != '\0') {
        if (param_3 == 0) {
LAB_01304ae0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar7,param_3,&DAT_01ce4640);
        }
LAB_01304934:
        param_2[uVar7] = (ushort)((local_34 >> 8 & 0xff) << 8) | (ushort)(local_34 >> 0x10) & 0xff;
        uVar2 = uVar7 + 1;
        if (param_3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2,param_3,&DAT_01ce4650);
        }
        param_2[uVar2] = CONCAT11((char)(local_34 >> 0x18),(undefined1)uStack_30);
        uVar3 = 1;
        uVar7 = uVar7 + 2;
        goto LAB_01304ac8;
      }
      *param_1 = uVar8;
      param_1[1] = uVar5;
    }
    local_2c = 0x10;
    local_28 = 1;
    local_34 = 1;
    uStack_30 = 4;
    uVar11 = FUN_01304b0c(&local_34,param_1);
    if (((uint)uVar11 & 0xffff) != 1) {
      uVar3 = 0;
      *param_1 = uVar8;
      param_1[1] = uVar5;
      uVar7 = 0;
      if ((uVar11 & 1) == 0) goto LAB_01304ac8;
    }
    uVar3 = 0;
    uVar7 = 1;
    *param_2 = (short)(uVar11 >> 0x20);
    if (param_3 != 1) {
      iVar6 = param_3 * 2 + -2;
      puVar10 = param_2;
      do {
        puVar10 = puVar10 + 1;
        pcVar4 = (char *)*param_1;
        iVar9 = param_1[1];
        if ((uVar7 < param_3 - 1) && (iVar9 != 0)) {
          cVar1 = *pcVar4;
          *param_1 = pcVar4 + 1;
          param_1[1] = iVar9 + -1;
          if ((cVar1 == ':') && (FUN_01304258(&local_34,param_1), (char)local_34 != '\0')) {
            if (param_3 <= uVar7) goto LAB_01304ae0;
            goto LAB_01304934;
          }
        }
        uVar3 = 0;
        if (iVar9 == 0) {
          iVar9 = 0;
LAB_01304ab8:
          *param_1 = pcVar4;
          param_1[1] = iVar9;
          goto LAB_01304ac8;
        }
        cVar1 = *pcVar4;
        *param_1 = pcVar4 + 1;
        param_1[1] = iVar9 + -1;
        if (cVar1 != ':') goto LAB_01304ab8;
        local_2c = 0x10;
        local_28 = 1;
        local_34 = 1;
        uStack_30 = 4;
        uVar12 = FUN_01304b0c(&local_34,param_1);
        if (((uint)uVar12 & 0xffff) != 1) {
          *param_1 = pcVar4;
          param_1[1] = iVar9;
          uVar3 = 0;
          goto LAB_01304ac8;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + -2;
        *puVar10 = (short)((uint6)uVar12 >> 0x20);
      } while (iVar6 != 0);
      uVar3 = 0;
      uVar7 = param_3;
    }
  }
LAB_01304ac8:
  return CONCAT44(uVar3,uVar7);
}

