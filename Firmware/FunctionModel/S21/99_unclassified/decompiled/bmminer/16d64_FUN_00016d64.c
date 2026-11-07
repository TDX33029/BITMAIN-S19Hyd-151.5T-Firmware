// FUN_00016d64 @ 00016d64  size=124  callers=1
// program: bmminer


float FUN_00016d64(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = DAT_000bfaac;
  DAT_000bfaa4 = DAT_000bfa8c - DAT_000bfa90;
  fVar4 = DAT_000bfaa8 + DAT_000bfaa8;
  fVar3 = DAT_000bfaa4 - DAT_000bfaa8;
  DAT_000bfaac = DAT_000bfaa8;
  DAT_000bfaa8 = DAT_000bfaa4;
  if (DAT_00a59168 - DAT_00a5f22c < 0x79) {
    fVar2 = DAT_000bfa94;
  }
  else {
    fVar2 = DAT_000bfa98;
  }
  return DAT_000bfaa4 * DAT_000bfa9c + fVar3 * fVar2 +
         ((DAT_000bfaa4 - fVar4) + fVar1) * DAT_000bfaa0;
}

