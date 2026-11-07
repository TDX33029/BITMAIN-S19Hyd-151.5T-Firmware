// FUN_000512bc @ 000512bc  size=228  callers=1
// program: bmminer


void FUN_000512bc(byte *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  
  bVar3 = *param_1;
  uVar4 = (uint)bVar3;
  uVar1 = (uint)*param_2;
  uVar2 = (uint)*param_3;
  if (uVar4 == 0) {
    if (uVar1 == 0) {
      bVar3 = *param_3;
      if (uVar2 == 0) {
        *param_3 = 0x19;
        *param_2 = 0x19;
        *param_1 = 0x19;
        return;
      }
    }
    else {
      bVar3 = *param_2;
      if (uVar2 != 0) {
        fVar5 = (float)VectorSignedFixedToFloat(uVar1 + uVar2,0x20,1);
        *param_1 = (0.0 < fVar5) * (char)(int)fVar5;
        return;
      }
    }
    *param_1 = bVar3;
    if (*param_2 != 0) goto LAB_000512e8;
  }
  else {
    if (uVar1 != 0) {
      if (uVar2 == 0) {
        fVar5 = (float)VectorSignedFixedToFloat(uVar1 + uVar4,0x20,1);
        *param_3 = (0.0 < fVar5) * (char)(int)fVar5;
        return;
      }
      return;
    }
    if (uVar2 != 0) {
      fVar5 = (float)VectorSignedFixedToFloat(uVar2 + uVar4,0x20,1);
      *param_2 = (0.0 < fVar5) * (char)(int)fVar5;
      return;
    }
  }
  *param_2 = bVar3;
LAB_000512e8:
  if (*param_3 == 0) {
    *param_3 = bVar3;
  }
  return;
}

