// FUN_011b9b20 @ 011b9b20 size=596 calls_out=7 calls_in=1
// strings:  at line EOF while parsing a listEOF while parsing an objectEOF while parsing a stringEOF while parsing a valueexpected `:`expected `;` or `]`expected `;` or `}`expected identexpected valueexpected `'`invalid escapeinvalid numbernumber out of rangeinvalid unicode code pointcontrol character (\u0000-\u001F) found while parsing a stringkey must be a stringinvalid value: expected key to be a number in quotesfloat key must be finite (got NaN or +/-inf)lone leading surrogate in hex escapetrailing commatrailing charactersunexpected end of hex escape

void FUN_011b9b20(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar5 = 0;
  while( true ) {
    if (*(char *)(param_2 + 0x28) == '\x01') {
      uVar3 = (uint)*(byte *)(param_2 + 0x29);
    }
    else {
      FUN_011ef738(&local_30,param_2 + 0x18);
      uVar3 = 0;
      if ((local_30 & 0xff) != 5) {
        if ((local_30 & 0xff) != 4) {
          uVar4 = FUN_0157c4a0(local_30,local_2c);
          goto LAB_011b9d40;
        }
        uVar3 = (uint)local_30._1_1_;
        *(byte *)(param_2 + 0x29) = local_30._1_1_;
        *(undefined1 *)(param_2 + 0x28) = 1;
      }
    }
    if (9 < uVar3 - 0x30) break;
    uVar1 = *(undefined1 *)(param_2 + 0x29);
    cVar2 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar2 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar6 = *(int *)(param_2 + 0x14);
      if (iVar6 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(param_2 + 0xc);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar6) = uVar1;
      *(int *)(param_2 + 0x14) = iVar6 + 1;
    }
    uVar5 = uVar5 + 1;
  }
  if (uVar3 == 0x2e) {
    FUN_011b9d88(param_1,param_2,param_3);
    return;
  }
  if (uVar3 == 0x45 || uVar3 == 0x65) {
    FUN_011ba128(param_1,param_2,param_3);
    return;
  }
  dVar7 = (double)FUN_01845f30(param_5,param_6);
  uVar3 = uVar5;
  if ((int)uVar5 < 0) {
    uVar3 = -uVar5;
  }
  while (0x134 < uVar3) {
    if (dVar7 == 0.0) goto LAB_011b9d10;
    if (uVar5 < 0x80000000) {
      local_30 = 0xe;
      uVar4 = FUN_0157c50c(&local_30,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20)
                          );
LAB_011b9d40:
      *param_1 = 1;
      param_1[1] = uVar4;
      return;
    }
    dVar7 = dVar7 / 1e+308;
    uVar5 = uVar5 + 0x134;
    uVar3 = uVar5;
    if ((int)uVar5 < 0) {
      uVar3 = -uVar5;
    }
  }
  if ((int)uVar5 < 0) {
    dVar7 = dVar7 / (double)(&DAT_0040ddb8)[uVar3];
  }
  else {
    dVar7 = dVar7 * (double)(&DAT_0040ddb8)[uVar3];
    if (SUB84(dVar7,0) == 0 && ((uint)((ulonglong)dVar7 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
      local_30 = 0xe;
      uVar4 = FUN_0157c50c(&local_30,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20)
                          );
      *param_1 = 1;
      param_1[1] = uVar4;
      return;
    }
  }
LAB_011b9d10:
  *param_1 = 0;
  dVar8 = -dVar7;
  if (param_3 != 0) {
    dVar8 = dVar7;
  }
  *(double *)(param_1 + 2) = dVar8;
  return;
}

