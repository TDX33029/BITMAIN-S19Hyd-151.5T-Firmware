// FUN_00ba9fd8 @ 00ba9fd8 size=504 calls_out=4 calls_in=1
// strings: BUG: impossible

longlong FUN_00ba9fd8(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;
  double dVar7;
  longlong lVar8;
  int local_88;
  int local_84;
  double local_58;
  
  dVar2 = (double)CONCAT44(param_2,param_1);
  FUN_00c31a94(&local_88,*(undefined4 *)(*(int *)(param_3 + 0x208) + 4),
               *(undefined4 *)(*(int *)(param_3 + 0x208) + 8));
  if (local_88 == 5 && local_84 == 0) {
    return (ulonglong)param_4 << 0x20;
  }
  iVar3 = *(int *)(param_3 + 0x1d8);
  dVar7 = (double)VectorUnsignedToFloat(*(undefined4 *)(iVar3 + 0xc4),(byte)(in_fpscr >> 0x16) & 3);
  dVar7 = ((local_58 - (*(double *)(param_3 + 0x1c8) + *(double *)(param_3 + 0x1c0) * 100.0)) /
          dVar7) * 1.25;
  in_fpscr = in_fpscr & 0xfffffff;
  if ((dVar2 <= dVar7) &&
     (uVar1 = in_fpscr | (uint)(dVar7 < dVar2) << 0x1f,
     in_fpscr = uVar1 | (uint)(NAN(dVar7) || NAN(dVar2)) << 0x1c,
     (byte)(uVar1 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1))) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
  }
  if (param_4 == 0) {
    iVar5 = *(int *)(iVar3 + 0xbc);
  }
  else {
    iVar5 = *(int *)(iVar3 + 0xbc);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_01879bd0);
  }
  uVar6 = *(undefined4 *)(iVar3 + 0xb8);
  uVar4 = FUN_018462e8(uVar6);
  VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
                    /* WARNING: Could not recover jumptable at 0x00baa160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar8 = (*(code *)(&DAT_00baa164 + *(int *)(&DAT_00baa164 + local_88 * 4)))();
  return lVar8;
}

