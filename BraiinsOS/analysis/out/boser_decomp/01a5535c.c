// FUN_01a5535c @ 01a5535c size=224 calls_out=8 calls_in=0
// strings: 

void FUN_01a5535c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_100 [72];
  int local_b8;
  int local_b4;
  uint local_b0;
  undefined1 auStack_68 [72];
  
  FUN_01a60d04(auStack_100,param_3,param_4);
  FUN_01a60910(auStack_68,auStack_100);
  FUN_01a4b568(&local_b8,param_2 + 8,auStack_68);
  if (local_b8 != -0x80000000) {
    FUN_01a4be0c(&local_b8,param_5);
    *param_1 = 4;
LAB_01a5541c:
    FUN_01a55484(auStack_100);
    return;
  }
  uVar1 = *(uint *)(local_b4 + 8);
  if (local_b0 < uVar1) {
    FUN_01a61630(*(int *)(local_b4 + 4) + local_b0 * 0xc0 + 0x70);
    uVar1 = *(uint *)(local_b4 + 8);
    if (local_b0 < uVar1) {
      iVar2 = *(int *)(local_b4 + 4) + local_b0 * 0xc0;
      FUN_01bed4e2(param_1,iVar2,0x70);
      FUN_01bed4e2(iVar2,param_5,0x70);
      goto LAB_01a5541c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(local_b0,uVar1,&DAT_01d2c124);
}

