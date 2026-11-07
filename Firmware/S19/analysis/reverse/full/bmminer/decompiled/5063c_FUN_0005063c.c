// FUN_0005063c @ 0005063c  size=188  callers=2
// program: bmminer


undefined4 FUN_0005063c(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  
  if ((DAT_0050fac4 == '\0') || (DAT_0050fc40 == '\0')) {
    uVar6 = FUN_0004de38();
    return uVar6;
  }
  if (DAT_0050fadc < 2) {
    return 0;
  }
  puVar5 = &DAT_0050fab8;
  dVar7 = 0.0;
  uVar1 = (uint)(byte)DAT_0050fae0;
  pbVar3 = (byte *)((int)&DAT_0050fae0 + 1);
  do {
    pbVar4 = pbVar3 + 1;
    uVar2 = (uint)*pbVar3;
    if (param_1 < (int)uVar1) {
      if ((int)uVar2 <= param_1) goto LAB_00050694;
    }
    else if ((param_1 <= (int)uVar2) || (param_1 <= (int)uVar1)) {
LAB_00050694:
      dVar7 = (double)VectorSignedToFloat(uVar2 - uVar1,(byte)(in_fpscr >> 0x16) & 3);
      dVar8 = (double)VectorSignedToFloat(param_1 - uVar1,(byte)(in_fpscr >> 0x16) & 3);
      dVar7 = *(double *)(puVar5 + 0x32) +
              ((*(double *)(puVar5 + 0x34) - *(double *)(puVar5 + 0x32)) / dVar7) * dVar8;
    }
    puVar5 = puVar5 + 2;
    uVar1 = uVar2;
    pbVar3 = pbVar4;
    if ((byte *)((int)&DAT_0050fae0 + DAT_0050fadc) == pbVar4) {
      return SUB84(dVar7,0);
    }
  } while( true );
}

