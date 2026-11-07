// FUN_019e6410 @ 019e6410 size=284 calls_out=7 calls_in=2
// strings: core missing

void FUN_019e6410(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_01306fc8(&DAT_01d291a4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x19e6500);
    (*pcVar1)();
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  if (*(int *)(param_1 + 8) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_019e5fac();
    iVar4 = *(int *)(param_1 + 4) + 1;
  }
  puVar3 = (undefined4 *)*param_3;
  *(int *)(param_1 + 4) = iVar4;
  *(int *)(param_1 + 8) = param_2;
  if ((undefined1 *)puVar3[2] == &DAT_3b9aca00) {
    FUN_019e2378(param_3[1],param_3[2] + 0x100);
  }
  else {
    param_2 = param_3[2];
    FUN_019e1fd8(param_3[1],param_2 + 0x100,*puVar3,puVar3[1],(undefined1 *)puVar3[2]);
  }
  FUN_019f993c(param_3[3] + 0xc);
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = FUN_01306fc8(&DAT_01d291b4);
    *(int *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_01be040c(uVar2);
  }
  iVar4 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("core missing",0xc,&DAT_01d291c4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

