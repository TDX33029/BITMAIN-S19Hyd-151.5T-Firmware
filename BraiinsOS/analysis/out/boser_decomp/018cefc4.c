// FUN_018cefc4 @ 018cefc4 size=372 calls_out=4 calls_in=0
// strings: 

void FUN_018cefc4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  uVar3 = *(ushort *)(param_6 + 0xc) - 2;
  if (((uVar3 & 0xffff) < 10) && ((0x3dfU >> (uVar3 & 0xff) & 1) != 0)) {
    FUN_01ae75f4(&local_90,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8),0);
    if (local_90 == 0) {
      FUN_018cc5e4(&local_f8,local_8c & 0xff);
      *param_1 = local_f8;
      param_1[1] = iStack_f4;
      param_1[2] = iStack_f0;
      param_1[3] = iStack_ec;
    }
    else {
      uVar3 = uVar3 * 4 & 0x3fffc;
      iVar5 = *(int *)(&DAT_00538914 + uVar3);
      puVar4 = *(undefined4 **)((int)&PTR_DAT_01d33cf4 + uVar3);
      FUN_01bed4e2((int)&local_f8 + 1,(int)&local_8c + 1,0x67);
      uVar2 = *(undefined4 *)(param_6 + 4);
      iVar5 = iVar5 << 2;
      uVar6 = *(undefined4 *)(param_6 + 8);
      do {
        if (iVar5 == 0) {
          cVar1 = '%';
          goto LAB_018cf0fc;
        }
        cVar1 = FUN_01aeafe0(*puVar4,local_c4,local_c0,param_3,param_4,uVar2,uVar6);
        iVar5 = iVar5 + -4;
        puVar4 = puVar4 + 1;
      } while (cVar1 == '%');
      if (cVar1 != '&') {
LAB_018cf0fc:
        FUN_018cc5e4(&local_90,cVar1);
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

