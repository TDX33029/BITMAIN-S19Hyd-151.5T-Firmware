// FUN_015f4114 @ 015f4114 size=112 calls_out=1 calls_in=0
// strings: 

void FUN_015f4114(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  code *pcVar4;
  char *local_10;
  char *local_c;
  
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\x02') {
    local_10 = pcVar1 + 1;
    pcVar4 = FUN_015f3f64;
    pcVar2 = "V4";
    ppcVar3 = &local_10;
  }
  else {
    pcVar2 = "V6";
    pcVar4 = FUN_015f403c;
    ppcVar3 = &local_c;
    local_c = pcVar1;
  }
  FUN_013032f4(param_2,pcVar2,2,ppcVar3,pcVar4);
  return;
}

