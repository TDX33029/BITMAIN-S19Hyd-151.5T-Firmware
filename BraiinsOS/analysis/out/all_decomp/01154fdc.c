// FUN_01154fdc @ 01154fdc size=500 calls_out=3 calls_in=3
// strings: 

void FUN_01154fdc(undefined1 *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char local_26;
  undefined4 local_25;
  undefined1 uStack_21;
  
  iVar7 = param_2[2];
  FUN_01155c64(&local_26);
  if (local_26 != '\x01') goto LAB_0115516c;
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  if (uVar10 == uVar9) goto LAB_0115516c;
  if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar10,uVar9,&DAT_01888c94);
  }
  iVar4 = *param_2;
  if (*(char *)(iVar4 + uVar10) != '/') goto LAB_0115516c;
  uVar3 = uVar10 + 1;
  param_2[2] = uVar3;
  if (uVar3 == uVar9) {
LAB_01155078:
    param_2[2] = uVar3;
    param_2[2] = uVar3;
    goto LAB_0115516c;
  }
  if (uVar9 <= uVar3) goto LAB_011551c0;
  cVar1 = *(char *)(iVar4 + uVar3);
  uVar6 = uVar10 + 2;
  param_2[2] = uVar6;
  if (9 < (byte)(cVar1 - 0x30U)) goto LAB_01155078;
  uVar5 = (uint)(byte)(cVar1 - 0x30);
  if (0x20 < uVar5) {
LAB_0115509c:
    param_2[2] = uVar3;
LAB_0115516c:
    param_2[2] = iVar7;
    *param_1 = 0;
    return;
  }
  if (uVar6 != uVar9) {
    if (uVar6 < uVar9) {
      bVar2 = *(byte *)(iVar4 + uVar6);
      uVar11 = uVar10 + 3;
      param_2[2] = uVar11;
      uVar10 = bVar2 - 0x30;
      if (9 < (uVar10 & 0xff)) goto LAB_01155104;
      bVar8 = true;
      uVar6 = uVar11;
      goto LAB_0115510c;
    }
LAB_011551bc:
    uVar3 = uVar6;
LAB_011551c0:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,uVar9,&DAT_01888c94);
  }
LAB_01155104:
  bVar8 = false;
  param_2[2] = uVar6;
LAB_0115510c:
  if (!bVar8) goto LAB_01155160;
  uVar5 = uVar5 * 10 + (uVar10 & 0xff);
  if (0x20 < uVar5) {
    param_2[2] = uVar3;
    goto LAB_0115516c;
  }
  if (uVar6 != uVar9) {
    if (uVar9 <= uVar6) goto LAB_011551bc;
    bVar2 = *(byte *)(iVar4 + uVar6);
    param_2[2] = uVar6 + 1;
    if (bVar2 - 0x30 < 10) goto LAB_0115509c;
  }
  param_2[2] = uVar6;
LAB_01155160:
  if (0x20 < (uVar5 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_21,&DAT_01888c84,&DAT_01888ccc);
  }
  *(undefined4 *)(param_1 + 1) = local_25;
  param_1[5] = (char)uVar5;
  *param_1 = 1;
  return;
}

