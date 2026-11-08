// FUN_016a4570 @ 016a4570 size=128 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_016a4570(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *local_1c;
  char **local_18;
  undefined1 *local_14;
  
  pcVar3 = (char *)*param_1;
  iVar1 = FUN_00faace8(param_2,*(undefined4 *)(pcVar3 + 0x14),*(undefined4 *)(pcVar3 + 0x18));
  uVar2 = 1;
  if ((iVar1 == 0) && (uVar2 = 0, *pcVar3 != '\a')) {
    local_14 = &LAB_016a45f8;
    local_18 = &local_1c;
    local_1c = pcVar3;
    uVar2 = FUN_00fa948c(*param_2,param_2[1],&DAT_0057fdb0,&local_18);
  }
  return uVar2;
}

