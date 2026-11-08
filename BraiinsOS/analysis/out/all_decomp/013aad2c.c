// FUN_013aad2c @ 013aad2c size=316 calls_out=3 calls_in=0
// strings: 

void FUN_013aad2c(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  
  uVar4 = param_4[4];
  uVar5 = param_4[5];
  if (uVar4 <= uVar5) {
    if (1 < *param_4 - 1U) {
      local_2f = *(undefined1 *)(param_2 + 4);
      local_2e = *(undefined1 *)(param_2 + 5);
      local_2d = *(undefined1 *)(param_2 + 6);
      if ((uint)param_4[3] < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar4,uVar5,param_4[3],&DAT_01893720);
      }
      local_24 = &local_2d;
      local_28 = &local_2e;
      iVar3 = param_4[2] + uVar4;
      local_2c = &local_2f;
      uVar7 = FUN_005f70a0(&local_2c,iVar3,param_4[2] + uVar5);
      if ((uVar7 & 1) == 0) {
        *param_1 = 0;
        return;
      }
      uVar4 = ((int)(uVar7 >> 0x20) - iVar3) + uVar4;
      if (uVar4 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
      }
LAB_013aae08:
      param_1[1] = 0;
      param_1[2] = uVar4 + 1;
      *param_1 = 1;
      return;
    }
    if (uVar4 < (uint)param_4[3]) {
      cVar1 = *(char *)(param_2 + 4);
      cVar2 = *(char *)(param_4[2] + uVar4);
      bVar6 = cVar1 == cVar2;
      if (!bVar6) {
        cVar1 = *(char *)(param_2 + 5);
      }
      if ((bVar6 || cVar1 == cVar2) || (*(char *)(param_2 + 6) == cVar2)) goto LAB_013aae08;
    }
  }
  *param_1 = 0;
  return;
}

