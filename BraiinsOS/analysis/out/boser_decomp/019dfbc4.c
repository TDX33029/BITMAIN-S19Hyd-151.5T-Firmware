// FUN_019dfbc4 @ 019dfbc4 size=168 calls_out=5 calls_in=20
// strings: 

void FUN_019dfbc4(uint *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint local_18;
  uint local_14;
  
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d28f7c);
  }
  iVar2 = FUN_01be9c30(param_2,1);
  if (iVar2 == -1) {
    puVar3 = (uint *)FUN_01be3244();
    uVar4 = *puVar3;
    local_18 = local_18 & 0xffffff00;
    local_14 = uVar4;
    cVar1 = FUN_005ef5e8(&local_18);
    if (cVar1 == '\a') {
      FUN_0069263c(local_18,uVar4);
      goto LAB_019dfc50;
    }
  }
  else {
    local_18 = CONCAT31(local_18._1_3_,4);
  }
  if ((local_18 & 0xff) != 4) {
    *param_1 = local_18;
    param_1[1] = local_14;
    return;
  }
LAB_019dfc50:
  *(undefined1 *)param_1 = 4;
  return;
}

