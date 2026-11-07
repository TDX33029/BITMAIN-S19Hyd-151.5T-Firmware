// FUN_0003de20 @ 0003de20  size=500  callers=1
// program: bmminer


void FUN_0003de20(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint in_fpscr;
  undefined4 uVar7;
  undefined4 extraout_s1;
  double dVar8;
  double dVar9;
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  
  iVar6 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar6);
    if ((iVar1 != 0) && (uVar2 = FUN_0002a514(), 0 < (int)uVar2)) {
      uVar4 = 0;
      pcVar5 = &DAT_00a537b8 + iVar6 * 0x100;
      do {
        iVar1 = uVar4 * 4 + 0x7f9010;
        if ((*pcVar5 != '\0') && (*(int *)(&DAT_000cb678 + iVar1 + iVar6 * 0x400) < 0x1e)) {
          local_44 = 0;
          local_48 = 0;
          uVar7 = FUN_00027f1c(iVar6,uVar4);
          in_fpscr = in_fpscr & 0xfffffff;
          if (50.0 <= (double)CONCAT44(extraout_s1,uVar7)) {
            iVar3 = FUN_0002a584();
            FUN_0002cef8(iVar6,0,iVar3 * (uVar4 & 0xff) & 0xff,DAT_008c7044);
            FUN_00081ee8((float)((double)CONCAT44(extraout_s1,uVar7) - 15.0),&local_48,local_4c,0);
            local_44._0_3_ = CONCAT12(local_4c[0],(undefined2)local_44);
            iVar3 = FUN_0002a584();
            FUN_0002d6b0(iVar6,0,iVar3 * (uVar4 & 0xff) & 0xff,DAT_008c7044,local_48,local_44);
            dVar8 = (double)VectorSignedToFloat(*(undefined4 *)
                                                 (&DAT_000cb678 + iVar1 + iVar6 * 0x400),
                                                (byte)(in_fpscr >> 0x16) & 3);
            dVar9 = (double)VectorUnsignedToFloat(DAT_000c7f6c,(byte)(in_fpscr >> 0x16) & 3);
            DAT_000c7f6c = (uint)(0.0 < dVar9 + 15.0) * (int)(longlong)(dVar9 + 15.0);
            *(int *)(&DAT_000cb678 + iVar1 + iVar6 * 0x400) = (int)(longlong)(dVar8 + 15.0);
          }
        }
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (uVar2 != uVar4);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 4);
  if (DAT_000c7f70 == '\0') {
    dVar9 = (double)VectorUnsignedToFloat(DAT_000c7f6c,(byte)(in_fpscr >> 0x16) & 3);
    iVar6 = FUN_0002a6e0();
    iVar1 = FUN_0002a514();
    dVar8 = (double)VectorSignedToFloat(iVar1 * iVar6 * 5,(byte)(in_fpscr >> 0x16) & 3);
    if (dVar8 * 0.8 < dVar9) {
      DAT_000c7f70 = '\x01';
    }
  }
  return;
}

