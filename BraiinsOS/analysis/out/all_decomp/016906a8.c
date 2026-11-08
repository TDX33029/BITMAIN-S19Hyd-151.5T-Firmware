// FUN_016906a8 @ 016906a8 size=580 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_016906a8(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    return 1;
  }
  do {
    uVar7 = 0;
    while (-1 < (char)param_1[uVar7]) {
      uVar7 = uVar7 + 1;
      if (param_2 == uVar7) {
        while( true ) {
          if (param_2 == 0) {
            return 1;
          }
          bVar4 = *param_1;
          if ((char)bVar4 < '\0') break;
          param_2 = param_2 - 1;
          param_1 = param_1 + 1;
          if ((uint)(int)(char)(&DAT_004149d6)[bVar4] < 0x80000000) {
            return 0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4((uint)bVar4,0x80,&DAT_018adfb0);
      }
    }
    if (uVar7 == 0) {
      pbVar6 = param_1;
    }
    else {
      if (uVar7 < param_2) {
        if ((char)param_1[uVar7] < -0x40) goto LAB_01690898;
      }
      else if (param_2 != uVar7) {
LAB_01690898:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_1,param_2,0,uVar7,&DAT_018adf70);
      }
      param_2 = param_2 - uVar7;
      uVar8 = 0;
      while (pbVar6 = param_1 + uVar7, uVar7 != uVar8) {
        bVar4 = param_1[uVar8];
        if ((char)bVar4 < '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4((uint)bVar4,0x80,&DAT_018adfb0);
        }
        uVar8 = uVar8 + 1;
        if (-1 < (char)(&DAT_004149d6)[bVar4]) {
          return 0;
        }
      }
    }
    if (param_2 == 0) {
      pbVar6 = &DAT_00000001;
    }
    else {
      uVar8 = 0;
      do {
        if ((uint)(int)(char)param_1[uVar8 + uVar7] < 0x80000000) {
          if (uVar8 == 0) goto LAB_01690828;
          if (uVar8 < param_2) {
            if ((char)pbVar6[uVar8] < -0x40) goto LAB_016908d4;
          }
          else if (param_2 != uVar8) {
LAB_016908d4:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(pbVar6,param_2,0,uVar8,&DAT_018adf70);
          }
          pbVar5 = pbVar6 + uVar8;
          param_2 = param_2 - uVar8;
          uVar7 = (uint)(char)*pbVar6;
          if (uVar7 < 0x80000000) {
            return 0;
          }
          goto LAB_016907e4;
        }
        uVar8 = uVar8 + 1;
      } while (param_2 != uVar8);
      param_2 = 0;
      pbVar5 = &DAT_00000001;
      uVar7 = (uint)(char)*pbVar6;
      if (-1 < (int)uVar7) {
        return 0;
      }
LAB_016907e4:
      if ((uVar7 & 0xff) < 0xf0) {
        return 0;
      }
      pbVar1 = pbVar6 + 1;
      pbVar2 = pbVar6 + 2;
      pbVar3 = pbVar6 + 3;
      pbVar6 = pbVar5;
      if ((undefined1 *)
          ((*pbVar2 & 0x3f) << 6 | (*pbVar1 & 0x3f) << 0xc | *pbVar3 & 0x3f | (uVar7 & 7) << 0x12)
          != &DAT_00110000) {
        return 0;
      }
    }
LAB_01690828:
    param_1 = pbVar6;
    if (param_2 == 0) {
      return 1;
    }
  } while( true );
}

