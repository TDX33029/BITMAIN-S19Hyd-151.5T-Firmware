// FUN_011119a8 @ 011119a8 size=280 calls_out=5 calls_in=3
// strings: BUG: non-monotonic clock

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x01111a94 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_011119a8(double *param_1)

{
  uint in_fpscr;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_015f3b0c(&local_28,1);
  local_40 = local_20;
  local_48 = local_28;
  uStack_44 = uStack_24;
  local_30 = *(undefined1 **)(param_1 + 4);
  if (local_30 == &DAT_3b9aca00) {
    return 0;
  }
  local_38 = *(undefined4 *)(param_1 + 3);
  local_34 = *(undefined4 *)((int)param_1 + 0x1c);
  FUN_015f3c24(&local_28,&local_48,&local_38);
  if ((local_28 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("BUG: non-monotonic clock",0x18,&DAT_018870fc);
  }
  dVar2 = (double)FUN_01845f30(local_20,local_1c);
  dVar1 = (double)VectorUnsignedToFloat(local_18,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = dVar1 / 1000000000.0 + dVar2;
  dVar1 = *param_1;
  dVar3 = param_1[2];
  dVar4 = dVar2 / dVar1;
  if (dVar4 < 1.0) {
    return SUB84((dVar3 + (1.0 - dVar4) * param_1[1]) / dVar1,0);
  }
  dVar2 = (dVar2 - dVar1) * -0.25 + 1.0;
  FUN_016d5578(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),0);
  return SUB84((dVar3 / dVar1) * dVar2,0);
}

