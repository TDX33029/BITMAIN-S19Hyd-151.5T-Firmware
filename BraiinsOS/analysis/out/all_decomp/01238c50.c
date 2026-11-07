// FUN_01238c50 @ 01238c50 size=940 calls_out=5 calls_in=4
// strings: 

void FUN_01238c50(int *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  
  pbVar1 = (byte *)0x0;
  pbVar10 = param_2;
  do {
    pbVar2 = pbVar1;
    if (pbVar10 == param_2 + (int)param_3) {
      iVar9 = param_1[2];
      if ((byte *)(*param_1 - iVar9) < param_3) {
        FUN_011cf828(param_1,iVar9,param_3,1,1);
        iVar9 = param_1[2];
      }
      FUN_016dd1aa(param_1[1] + iVar9,param_2,param_3);
      param_1[2] = (int)(param_3 + iVar9);
      return;
    }
    pbVar3 = pbVar10 + 1;
    uVar5 = (uint)*pbVar10;
    if (0x7fffffff < (uint)(int)(char)*pbVar10) {
      if (uVar5 < 0xe0) {
        uVar5 = pbVar10[1] & 0x3f | (uVar5 & 0x1f) << 6;
        pbVar3 = pbVar10 + 2;
      }
      else {
        uVar7 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
        if (uVar5 < 0xf0) {
          uVar5 = uVar7 | (uVar5 & 0x1f) << 0xc;
          pbVar3 = pbVar10 + 3;
        }
        else {
          uVar5 = pbVar10[3] & 0x3f | uVar7 << 6 | (uVar5 & 7) << 0x12;
          pbVar3 = pbVar10 + 4;
        }
      }
    }
  } while ((uVar5 != 0x7e) &&
          (pbVar1 = pbVar3 + ((int)pbVar2 - (int)pbVar10), pbVar10 = pbVar3, uVar5 != 0x2f));
  do {
    if (pbVar2 == (byte *)0x0) {
      pbVar1 = param_2;
    }
    else {
      if (pbVar2 < param_3) {
        if ((char)param_2[(int)pbVar2] < -0x40) {
LAB_01238fbc:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(param_2,param_3,0,pbVar2,&DAT_018adf70);
        }
      }
      else if (param_3 != pbVar2) goto LAB_01238fbc;
      param_3 = param_3 + -(int)pbVar2;
      pbVar1 = param_2 + (int)pbVar2;
      if ((byte *)(*param_1 - param_1[2]) < pbVar2) {
        FUN_011cf828(param_1,param_1[2],pbVar2,1,1);
      }
    }
    iVar9 = param_1[1];
    iVar11 = param_1[2];
    FUN_016dd1aa(iVar9 + iVar11,param_2,pbVar2);
    pbVar2 = pbVar2 + iVar11;
    param_1[2] = (int)pbVar2;
    if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0,0,&DAT_0188abe8);
    }
    if (*pbVar1 == 0x2f) {
      uVar6 = 0x317e;
    }
    else {
      uVar6 = 0x307e;
      if (*pbVar1 != 0x7e) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_0188ac08);
      }
    }
    if ((uint)(*param_1 - (int)pbVar2) < 2) {
      FUN_011cf828(param_1,pbVar2,2,1,1);
      iVar9 = param_1[1];
      pbVar2 = (byte *)param_1[2];
    }
    pbVar10 = pbVar2 + 2;
    param_1[2] = (int)pbVar10;
    *(undefined2 *)(pbVar2 + iVar9) = uVar6;
    if ((param_3 != &DAT_00000001) && ((char)pbVar1[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(pbVar1,param_3,1,param_3,&DAT_0188abf8);
    }
    param_2 = pbVar1 + 1;
    pbVar1 = pbVar1 + (int)param_3;
    param_3 = param_3 + -1;
    pbVar3 = (byte *)0x0;
    pbVar8 = param_2;
    do {
      pbVar2 = pbVar3;
      if (pbVar8 == pbVar1) {
        if ((byte *)(*param_1 - (int)pbVar10) < param_3) {
          FUN_011cf828(param_1,pbVar10,param_3,1,1);
          iVar9 = param_1[1];
          pbVar10 = (byte *)param_1[2];
        }
        FUN_016dd1aa(pbVar10 + iVar9,param_2,param_3);
        param_1[2] = (int)(pbVar10 + (int)param_3);
        return;
      }
      pbVar4 = pbVar8 + 1;
      uVar5 = (uint)*pbVar8;
      if (0x7fffffff < (uint)(int)(char)*pbVar8) {
        if (uVar5 < 0xe0) {
          uVar5 = pbVar8[1] & 0x3f | (uVar5 & 0x1f) << 6;
          pbVar4 = pbVar8 + 2;
        }
        else {
          uVar7 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
          if (uVar5 < 0xf0) {
            uVar5 = uVar7 | (uVar5 & 0x1f) << 0xc;
            pbVar4 = pbVar8 + 3;
          }
          else {
            uVar5 = pbVar8[3] & 0x3f | uVar7 << 6 | (uVar5 & 7) << 0x12;
            pbVar4 = pbVar8 + 4;
          }
        }
      }
    } while ((uVar5 != 0x2f) &&
            (pbVar3 = pbVar4 + ((int)pbVar2 - (int)pbVar8), pbVar8 = pbVar4, uVar5 != 0x7e));
  } while( true );
}

