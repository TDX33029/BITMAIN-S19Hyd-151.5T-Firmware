// FUN_0129da68 @ 0129da68 size=184 calls_out=1 calls_in=0
// strings: 

void FUN_0129da68(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  if ((*param_1 & 1) != 0) {
    param_3 = param_1[2];
    iVar3 = 2;
    uVar2 = param_1[3];
    param_4 = uVar2 - (0x7f >= param_3);
    if (uVar2 != 0 || uVar2 < (0x7f < param_3)) {
      iVar3 = 3;
      param_4 = uVar2 - (0x3fff >= param_3);
      if (uVar2 != 0 || uVar2 < (0x3fff < param_3)) {
        iVar3 = 4;
        param_4 = uVar2 - (0x1fffff >= param_3);
        if (uVar2 != 0 || uVar2 < (0x1fffff < param_3)) {
          bVar4 = 0xfffffff < param_3;
          iVar3 = 5;
          param_3 = uVar2 - !bVar4;
          if (uVar2 != 0 || uVar2 < bVar4) {
            iVar3 = 6;
            if (7 < uVar2) {
              iVar3 = 7;
            }
            if (0x3ff < uVar2) {
              iVar3 = 8;
              if (0x1ffff < uVar2) {
                iVar3 = 9;
              }
              if ((0xffffff < uVar2) && (iVar3 = 0xb, uVar2 < 0x80000000)) {
                iVar3 = 10;
              }
            }
          }
        }
      }
    }
  }
  if ((param_1[4] & 1) != 0) {
    iVar3 = iVar3 + 9;
  }
  iVar1 = FUN_01337c54(param_1[8],param_1[4],param_3,param_4);
  param_1[9] = iVar3 + iVar1;
  return;
}

