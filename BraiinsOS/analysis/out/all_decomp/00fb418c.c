// FUN_00fb418c @ 00fb418c size=584 calls_out=3 calls_in=1
// strings: 

ulonglong FUN_00fb418c(undefined4 *param_1,undefined2 *param_2,uint param_3)

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
    return 0;
  }
  uVar8 = *param_1;
  uVar5 = param_1[1];
  if (param_3 != 1) {
    FUN_00fb3af4(&local_34,param_1);
    uVar7 = 0;
    if ((char)local_34 != '\0') {
      if (param_3 == 0) {
LAB_00fb43b0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,param_3,&DAT_01880e0c);
      }
LAB_00fb41e4:
      param_2[uVar7] = (ushort)((local_34 >> 8 & 0xff) << 8) | (ushort)(local_34 >> 0x10) & 0xff;
      uVar2 = uVar7 + 1;
      if (param_3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar2,param_3,&DAT_01880e1c);
      }
      uVar7 = uVar7 + 2;
      param_2[uVar2] = CONCAT11((char)(local_34 >> 0x18),(undefined1)uStack_30);
      uVar3 = 1;
      goto LAB_00fb4214;
    }
    *param_1 = uVar8;
    param_1[1] = uVar5;
  }
  local_2c = 0x10;
  local_28 = 1;
  local_34 = 1;
  uStack_30 = 4;
  uVar11 = FUN_00fb43dc(&local_34,param_1);
  if (((uint)uVar11 & 0xffff) != 1) {
    uVar3 = 0;
    uVar7 = 0;
    *param_1 = uVar8;
    param_1[1] = uVar5;
    if ((uVar11 & 1) == 0) goto LAB_00fb4214;
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
        if ((cVar1 == ':') && (FUN_00fb3af4(&local_34,param_1), (char)local_34 != '\0')) {
          if (param_3 <= uVar7) goto LAB_00fb43b0;
          goto LAB_00fb41e4;
        }
      }
      if (iVar9 == 0) {
        iVar9 = 0;
LAB_00fb4380:
        *param_1 = pcVar4;
        param_1[1] = iVar9;
        return (ulonglong)uVar7;
      }
      cVar1 = *pcVar4;
      *param_1 = pcVar4 + 1;
      param_1[1] = iVar9 + -1;
      if (cVar1 != ':') goto LAB_00fb4380;
      local_2c = 0x10;
      local_28 = 1;
      local_34 = 1;
      uStack_30 = 4;
      uVar12 = FUN_00fb43dc(&local_34,param_1);
      if (((uint)uVar12 & 0xffff) != 1) {
        *param_1 = pcVar4;
        param_1[1] = iVar9;
        return (ulonglong)uVar7;
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + -2;
      *puVar10 = (short)((uint6)uVar12 >> 0x20);
      if (iVar6 == 0) {
        return (ulonglong)param_3;
      }
    } while( true );
  }
LAB_00fb4214:
  return CONCAT44(uVar3,uVar7);
}

