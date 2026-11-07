// FUN_00075558 @ 00075558  size=576  callers=1
// program: bmminer


int FUN_00075558(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  double in_d0;
  double dVar5;
  double dVar6;
  int local_c;
  
  if (1 < DAT_0094521c) {
    for (local_c = 0; local_c < DAT_0094521c + -1; local_c = local_c + 1) {
      dVar5 = *(double *)(&DAT_00945208 + (local_c + 0x17) * 2) - 0.001;
      in_fpscr = in_fpscr & 0xfffffff;
      uVar1 = in_fpscr | (uint)(in_d0 < dVar5) << 0x1f | (uint)(in_d0 == dVar5) << 0x1e;
      uVar4 = uVar1 | (uint)(NAN(in_d0) || NAN(dVar5)) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if ((!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar4 >> 0x1c) & 1)) &&
         (uVar4 = in_fpscr, in_d0 < *(double *)(&DAT_00945208 + (local_c + 0x18) * 2) + 0.001)) {
LAB_00075664:
        dVar5 = (double)VectorSignedToFloat((uint)*(byte *)((int)&DAT_00945220 + local_c + 1) -
                                            (uint)*(byte *)((int)&DAT_00945220 + local_c),
                                            (byte)(in_fpscr >> 0x16) & 3);
        dVar6 = (double)VectorSignedToFloat((uint)*(byte *)((int)&DAT_00945220 + local_c),
                                            (byte)(in_fpscr >> 0x16) & 3);
        dVar5 = round((in_d0 - *(double *)(&DAT_00945208 + (local_c + 0x17) * 2)) *
                      (dVar5 / (*(double *)(&DAT_00945208 + (local_c + 0x18) * 2) -
                               *(double *)(&DAT_00945208 + (local_c + 0x17) * 2))) + dVar6);
        iVar3 = (int)(longlong)dVar5;
        if ((iVar3 < 0) || (0xff < iVar3)) {
          return -1;
        }
        return iVar3;
      }
      in_fpscr = uVar4 & 0xfffffff;
      if (in_d0 < *(double *)(&DAT_00945208 + (local_c + 0x17) * 2) + 0.001) {
        dVar5 = *(double *)(&DAT_00945208 + (local_c + 0x18) * 2) - 0.001;
        uVar1 = in_fpscr | (uint)(in_d0 < dVar5) << 0x1f | (uint)(in_d0 == dVar5) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(in_d0) || NAN(dVar5)) << 0x1c;
        bVar2 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))
        goto LAB_00075664;
      }
    }
  }
  return -1;
}

