// FUN_018cf140 @ 018cf140 size=296 calls_out=4 calls_in=0
// strings: 

void FUN_018cf140(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_90;
  undefined4 local_8c;
  int iStack_88;
  int iStack_84;
  
  uVar2 = *(ushort *)(param_6 + 0xc) - 3;
  uVar3 = uVar2 & 0xffff;
  if ((uVar3 < 9) && ((0x1e5U >> (uVar2 & 0xff) & 1) != 0)) {
    FUN_01ae75f4(&local_90,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8),0);
    if (local_90 == 0) {
      FUN_018cc5e4(&local_f8,local_8c & 0xff);
      *param_1 = local_f8;
      param_1[1] = iStack_f4;
      param_1[2] = iStack_f0;
      param_1[3] = iStack_ec;
    }
    else {
      uVar4 = *(undefined4 *)(&DAT_01d33d1c + uVar3 * 4);
      FUN_01bed4e2((int)&local_f8 + 1,(int)&local_8c + 1,0x67);
      cVar1 = FUN_01aeafe0(uVar4,local_c4,local_c0,param_3,param_4,*(undefined4 *)(param_6 + 4),
                           *(undefined4 *)(param_6 + 8));
      if (cVar1 != '&') {
        FUN_018cc5e4(&local_90);
        if ((char)local_90 != '\x14') {
          *param_1 = local_90;
          param_1[1] = local_8c;
          param_1[2] = iStack_88;
          param_1[3] = iStack_84;
          return;
        }
      }
      *(undefined1 *)param_1 = 0x14;
    }
  }
  else {
    *(undefined2 *)param_1 = 0x3a08;
  }
  return;
}

