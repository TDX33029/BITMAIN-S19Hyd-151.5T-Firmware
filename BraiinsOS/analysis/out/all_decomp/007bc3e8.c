// FUN_007bc3e8 @ 007bc3e8 size=184 calls_out=3 calls_in=1
// strings: 

void FUN_007bc3e8(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  pbVar2 = (byte *)*param_2;
  if (pbVar2 == (byte *)param_2[1]) {
    *param_1 = 0x80000000;
    return;
  }
  bVar1 = *pbVar2;
  *param_2 = pbVar2 + 1;
  uVar4 = *(undefined4 *)(&DAT_0041deec + (uint)bVar1 * 4);
  puVar5 = (&PTR_DAT_018afab0)[bVar1];
  iVar3 = thunk_FUN_016d4a50(uVar4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar4);
  }
  FUN_016dd1aa(iVar3,puVar5,uVar4);
  *param_1 = uVar4;
  param_1[1] = iVar3;
  param_1[2] = uVar4;
  return;
}

